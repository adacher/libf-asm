global _ft_putchar
%define SYSCALL(x) 0x2000000 | x

section .text

_ft_putchar:
push rbp
mov rbp, rsp
sub rsp, 8
mov [rsp], rdi
mov rsi, rsp
mov rdi, 1
mov rdx, 1
mov rax, SYSCALL(4)
syscall
add rsp, 8
leave
ret