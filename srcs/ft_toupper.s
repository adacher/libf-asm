global _ft_toupper

section .text

_ft_toupper:
    cmp     rdi, 0x61
    jb      false
    cmp     rdi, 0x7a
    ja      false
    jmp     true

false:
    mov     rax, rdi
    ret

true:
    sub     rdi, 0x20
    mov     rax, rdi
    ret