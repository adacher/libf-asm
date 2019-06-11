global _ft_cat
%define SYSCALL(x) 0x2000000 | x

section .bss
buff resb 50

section .text

_ft_cat:
push rbp
mov rbp, rsp

_loop: 
push rdi
mov rax, SYSCALL(3)
mov rdx, 50
lea rsi, [rel buff]
syscall
jc end
cmp rax, 0
jle end
mov rdi, 1
mov rdx, rax
mov rax, SYSCALL(4)
syscall
pop rdi
jmp _loop

end:
leave
ret