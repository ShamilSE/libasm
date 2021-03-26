global _ft_list_size

segment .text
_ft_list_size:
	mov		rax, -1
	jmp		loop

loop:
	inc		rax
	cmp		byte rdi, 0
	je		exit
	mov		rdi, [rdi + 8]
	jmp		loop

exit:
	ret
