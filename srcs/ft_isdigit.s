global _ft_isdigit

section .text

_ft_isdigit:
    cmp     rdi, 0x30
    jl      false
    cmp     rdi, 0x39
    jg      false
    mov     rax, 1
    ret

false:
    xor     rax, rax
    ret