segment .text
	global _ft_strlen

segment .data
	mov rax, 0

_ft_strlen:
	jmp loop

loop:
	cmp BYTE [rdi + rax], 0
	je exit
	inc rax
	jmp loop

exit:
	ret
