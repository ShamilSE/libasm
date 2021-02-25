segment	.text ; char *ft_strdup(const char *s1); - allocates memory to a s1 copy and return a pointer to it
	extern	_malloc
	extern	_ft_strlen
	extern	_ft_strcpy
	global	_ft_strdup

_ft_strdup:
	push	rdi
	call	_ft_strlen
