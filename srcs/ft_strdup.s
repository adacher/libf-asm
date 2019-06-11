global _ft_strdup
extern _ft_strlen
extern _malloc
extern _ft_memcpy

section .text  

_ft_strdup:
push rbp
mov rbp, rsp
push rdi
sub rsp, 8
call _ft_strlen
add rsp, 8
inc rax
push rax
mov rdi, rax
call _malloc
pop rdx
pop rsi
cmp rax, 0
jz quit
mov rdi, rax
call _ft_memcpy

quit:
mov rsp, rbp
pop rbp
ret