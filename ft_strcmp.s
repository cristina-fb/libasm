section .text
    global ft_strcmp

ft_strcmp:
    REPE CMPSB
    SUB rdi,1
    SUB rsi,1
    MOV al,[rdi]
    MOV dl,[rsi]
    SUB rax,rdx
    ret 