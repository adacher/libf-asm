global _ft_strlen

section .text

_ft_strlen:
	mov		rbx, rdi
	xor		rax, rax
	mov		rcx, 0xffffffff
	cld
	repne	scasb
	sub		rdi, rbx
	mov		rax, rdi
	dec		rax
	ret