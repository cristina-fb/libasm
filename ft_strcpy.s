section .text
    global ft_strcpy
    extern ft_strlen

ft_strcpy:
    MOV r12,rdi
    MOV r13,rsi
    MOV rdi,rsi
    call ft_strlen
    MOV rcx,rax
    MOV rsi,r13
    MOV rdi,r12
    REP MOVSB
    MOV byte [rdi],0
    MOV rax,r12
    ret

    