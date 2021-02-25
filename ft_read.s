segment	.text
	global	_ft_read
	extern	__error

_ft_read:
	mov	rax, 0x2000003
	syscall
	jc	error
	ret

error:
	push	rax
	call	__error
	pop	qword [rax]
	mov	rax, -1
	ret
