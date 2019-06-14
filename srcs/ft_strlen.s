global _ft_strlen

section .text

_ft_strlen:
cld
mov al, 0
xor rcx, rcx
not rcx
repne scasb
mov rax, -2
sub rax, rcx
ret