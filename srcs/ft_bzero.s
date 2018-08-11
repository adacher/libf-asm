global _ft_bzero

section .text
	global _ft_bzero

_ft_bzero:
	push rbp
	mov rsp, rbp
	mov rdi, 0x8(rbp)
	mov rsi, 0x10(rbp)
	cmp $0x0, 0x8(rbp)
	jne etiue1
	jmp etiue2

etiue1:
	mov $0x0, -0x18(rbp)

etiue3:
	mov -0x18(rbp), rax
	cmp -0x10(rbp), rax
	jae etiue2
	mov -0x8(rbp), rax
	mov -0x18(rbp), rcx
	mov rcx, rdx
	add $0x1, rdx
	mov rdx, -0x18(rbp)
	movb $0x0, (rax,rcx)
	jmp etiue3

etiue2:
	pop rbp
	ret