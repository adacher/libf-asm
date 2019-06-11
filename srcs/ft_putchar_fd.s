global _ft_putchar_fd
%define SYSCALL(x) 0x2000000 | x

section .text

_ft_putchar_fd:
push rbp
mov rbp, rsp
sub rsp, 8
mov [rsp], rdi
mov rdi, rsi
mov rsi, rsp
mov rdx, 1
mov rax, SYSCALL(4)
syscall
add rsp, 8
leave
ret