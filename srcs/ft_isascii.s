global _ft_isascii

section .text

_ft_isascii:
    cmp     rdi, 0x00
    jl      false
    cmp     rdi, 0x7f
    jg      false
    jmp     true

true:
    mov     rax, 1
    ret

false:
    xor     rax, rax
    ret