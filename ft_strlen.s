global _ft_strlen

segment .text
_ft_strlen:
	mov rax, 0
	jmp loop

loop:
	cmp byte [rdi + rax], 0
	je exit
	inc rax
	jmp loop

exit:
	ret
