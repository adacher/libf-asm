global _ft_isprint

section .text

_ft_isprint:
    cmp rdi, 32
    jl notprint
    cmp rdi, 126
    jg notprint
    mov rax, 1
    ret

notprint:
    mov rax, 0
    ret