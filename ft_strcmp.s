global _ft_strcmp ; int	ft_strcmp(const char *s1, const char *s2)

segment .text
_ft_strcmp:
	mov	rcx, 0
	jmp	loop

loop:
	cmp	byte [rdi + rcx], 0
	je	if_rsi_null
	cmp	byte [rsi + rcx], 0
	je	if_rdi_null
	
	inc	rcx
	jmp	loop

if_rsi_null:
	cmp	byte [rsi + rcx], 0
	je	equal
	mov	rax, 1
	ret

if_rdi_null:
	cmp	byte [rdi + rcx], 0
	je	equal
	mov	rax, -1
	ret

equal:
	mov	rax, 0
	ret
