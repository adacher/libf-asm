global _ft_isalpha

section .text

_ft_isalpha:
    cmp rdi, 97
    jl isnotalpha
    cmp rdi, 122
    jg isnotalpha
    cmp rdi, 65
    jl isnotalpha
    cmp rdi, 90
    jg isnotalpha
    mov rax, 1
    ret

isnotalpha:
    mov rax, 0