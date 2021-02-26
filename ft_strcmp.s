global _ft_strcmp ; int	ft_strcmp(const char *s1, const char *s2)
					; rdi - is a first argument, rsi - second
segment .text
_ft_strcmp:
	mov	rcx, 0
	jmp	loop

loop:
	mov	al, byte [rdi + rcx]
	mov	bl, byte [rsi + rcx]
	cmp	al, 0
	je	exit
	cmp	bl, 0
	je	exit
	cmp	al, bl
	jne	exit
	inc	rcx
	jmp	short loop



exit:
	movzx	rax, al
	movzx	rdx, bl
	sub	rax, rdx
	ret
