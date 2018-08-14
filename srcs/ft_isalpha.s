global _ft_isalpha

section .text

_ft_isalpha:
	cmp		rdi, 0x41
	jb		notvalid
	cmp		rdi, 0x5a
	jbe		valid
	cmp		rdi, 0x61
	jb		notvalid
	cmp		rdi, 0x7a
	jbe		valid

notvalid:
	mov		rax, 0
	ret

valid:
	mov		rax, 1
	ret