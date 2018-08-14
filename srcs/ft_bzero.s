global _ft_bzero

section .text

_ft_bzero:
.loop:
    dec     rsi
    cmp     rsi, 0
    jl      end
    mov     byte [rdi + rsi], 0
    jmp     .loop

end:
    ret