global _ft_strcat

section .text

_ft_strcat:
mov rax, rdi
jmp endofrdi

endofrdi:
cmp byte [rdi], 0
je copyrsi
inc rdi
jmp endofrdi

copyrsi:
cmp byte [rsi], 0
je end
movsb
jmp copyrsi

end:
ret