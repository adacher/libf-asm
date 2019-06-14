global _ft_strcat
extern _ft_strlen

section .text

_ft_strcat:
push rdi
push rbx
mov rbx, rdi
call _ft_strlen
mov r8, rax
mov rdi, rsi
call _ft_strlen
mov rdi, rbx
add rdi, r8
mov rcx ,rax
add rcx, 1
cld
repnz movsb
pop rbx
pop rax
ret