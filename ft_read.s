section .text
    global ft_read
    extern __errno_location

ft_read:
    MOV rax,0
    syscall
    CMP rax,0
    jl error
    ret

error:
    MOV r12,rax
    call __errno_location wrt ..plt
    MOV [rax],r12
    MOV rax,-1
    ret