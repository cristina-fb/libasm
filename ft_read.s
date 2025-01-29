section .text
    global ft_read

ft_read:
    MOV rax,0
    syscall
    jc error
    ret

error:
    MOV r12,rax
    call __errno_location
    MOV [rax],r12
    MOV rax,r12
    ret