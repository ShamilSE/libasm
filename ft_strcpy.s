global _ft_strcpy

segment .text
_ft_strcpy:
	mov rcx, 0
	mov rax, rdi
	jmp loop
    
loop:
	mov bl, byte [rsi + rcx] ; current char to bl
	mov byte [rdi + rcx], bl ; current char to rdi str (first parameter)
	cmp	bl, 0 ; compare bl and 0
	je  exit ; if equal return
	inc rcx ; increment rcx
	jmp short loop ; next iteration
    
exit:
	mov	byte [rdi + rcx], bl ; null terminator
	ret
