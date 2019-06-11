global _ft_putstr
extern _ft_strlen
%define SYSCALL(x) 0x2000000 | x

section .text

_ft_putstr:
push rdi
call _ft_strlen
mov rdx, rax
mov rdi, 1
pop rsi
mov rax, SYSCALL(4)
syscall
ret