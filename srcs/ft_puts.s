global _ft_puts
extern _ft_strlen
%define SYSCALL(x) 0x2000000 | x

section			.data
	newl		db 		10
	null		db		"(null)", 0

section			.text

_ft_puts:
push rbp
mov rbp, rsp
cmp rdi, 0
je eol

function:
mov r9, rdi
call _ft_strlen
mov r8, rax
push rax
mov rax, SYSCALL(4)
mov rdi, 1
mov rsi, r9
mov rdx, r8
syscall
mov rax, SYSCALL(4)
lea rsi, [rel newl]
mov rdx, 1
syscall
pop rax
leave
ret

eol:
lea rdi, [rel null]
jmp function