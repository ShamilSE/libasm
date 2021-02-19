#include <stdio.h>

size_t	ft_strlen(const char *s);

int main()
{
	char *string = "hello";
	printf("%zu\n", ft_strlen(string));
	return 0;
}
