section .text
    global ft_write
    extern __errno_location

ft_write:
    MOV rax,1
    syscall
    CMP rax,0
    jl error
    ret

error:
    MOV rdx,rax
    call __errno_location wrt ..plt
    MOV [rax],rdx
    MOV rax,-1
    ret