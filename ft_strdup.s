section .text
    global ft_strdup
    extern ft_strlen
    extern ft_strcpy
    extern malloc

ft_strdup:
    MOV rax,0
    MOV r12,rdi
    CALL ft_strlen
    ADD rax,1
    MOV rdi,rax
    CALL malloc wrt ..plt
    CMP rax,0
    jz error
    MOV rdi,rax
    MOV rsi,r12
    CALL ft_strcpy
    ret

error:
    ret