section .text
    global ft_strlen

ft_strlen:
    MOV rax,0
    MOV r12,rdi
    CMP byte [rdi],0
    jz exit
    REPNE SCASB
    SUB rdi,1
    SUB rdi,r12
    MOV rax,rdi
exit:
    ret