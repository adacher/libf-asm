global _ft_isalpha

section .text

_ft_isalpha:
	cmp		rdi, 0x41
	jb		false
	cmp		rdi, 0x5a
	jbe		true
	cmp		rdi, 0x61
	jb		false
	cmp		rdi, 0x7a
	jbe		true
	jmp		false

true:
	mov		rax, 1
	ret

false:
	xor		rax, rax
	ret