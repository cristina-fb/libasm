section .text
    global ft_strcpy
    extern ft_strlen

ft_strcpy:
    MOV rax,0
    MOV r14,rdi
    MOV rdx,rsi
    MOV rdi,rsi
    call ft_strlen
    MOV rcx,rax
    MOV rsi,rdx
    MOV rdi,r14
    CMP rsi,rdi
    jl reverse
    REP MOVSB
    MOV byte [rdi],0
    MOV rax,r14
    ret

reverse:
    ADD rsi,rax
    ADD rcx,1
    ADD rdi,rax
    MOV byte [rdi],0
    DEC rax
    STD
    REP MOVSB
    ADD rdi,1
    MOV rax,r14
    ret
