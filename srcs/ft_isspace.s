global _ft_isspace

section .text

_ft_isspace:
cmp rdi, 9
jb false
cmp rdi, 13
jbe true
cmp rdi, 32
je true
cmp rdi, 14
jae false
cmp rdi, 33
jae false

true:
mov rax, 1
ret

false:
xor rax, rax
ret
