global _ft_strcpy

segment .text
_ft_strcpy:
    mov rcx, 0
    mov rax, rdi
    jmp loop
    
loop:
    cmp byte [rsi + rcx], 0
    je  exit
	mov	bl, byte [rsi + rcx]
    mov byte [rdi + rcx], bl
    inc rcx
    jmp loop
    
exit:
	mov	byte [rdi + rcx], 0
    ret
