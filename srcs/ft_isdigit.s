global _ft_isdigit

section .text

_ft_isdigit:
    cmp rdi, '0'
    jl notdigit
    cmp rdi, '9'
    jg notdigit
    mov rax, 1
    ret

notdigit:
    mov rax, 0
    ret