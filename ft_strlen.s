section .text
    global ft_strlen

ft_strlen:
    MOV rax,0
loop:
    CMP byte [rdi],0
    jz exit
    ADD rax,1
    ADD rdi,1
    JMP loop
exit:
    ret