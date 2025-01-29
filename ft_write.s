section .text
    global ft_write
    extern __errno_location

ft_write:
    MOV rax,1
    syscall
    jc error
    ret

error:
    MOV r12,rax
    call __errno_location
    MOV [rax],r12
    MOV rax,r12
    ret