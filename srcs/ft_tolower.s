global _ft_tolower

section .text

_ft_tolower:
    cmp     rdi, 0x41
    jb      false
    cmp     rdi, 0x5a
    ja      false
    jmp     true

false:
    mov     rax, rdi
    ret

true:
    add     rdi, 0x20
    mov     rax, rdi
    ret