global _ft_isalpha

section .text

_ft_isalpha:
	cmp		rdi, 0x41
	jl		notvalid
	cmp		rdi, 0x5a
	jle		valid
	cmp		rdi, 0x61
	jl		notvalid
	cmp		rdi, 0x7a
	jle		valid

notvalid:
	mov		rax, 0
	ret

valid:
	mov		rax, 1
	ret