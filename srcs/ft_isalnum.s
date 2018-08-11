global _ft_isalnum

section .text
	global _ft_isalnum

_ft_isalnum:
	cmp rdi, 48
	js no
	cmp rdi, 58
	js yes
	cmp rdi, 65
	js no
	cmp rdi, 91
	js yes
	cmp rdi, 97
	js no
	cmp rdi, 123
	js yes

no:
	mov rax, 0
	jmp end

yes:
	mov rax, 1
	jmp end

end:
	ret
