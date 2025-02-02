section .text
    global ft_strcmp

ft_strcmp:
    MOV rax,0
    MOV rdx,0
loop:
    MOV al,[rdi]
    MOV dl,[rsi]
    CMP byte al,0
    JZ exit
    CMP byte dl,0
    JZ exit
    CMP byte al,dl
    JNZ exit
    ADD rdi,1
    ADD rsi,1
    JMP loop 

exit:
    SUB rax,rdx
    ret
