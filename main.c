#include <stdio.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);

int main()
{
	char string[7];
	char c_string[6];

	string[0] = 'h';
	string[1] = 'o';
	string[2] = 'l';
	string[3] = 'a';
	string[4] = '!';
	printf("%zu\n", ft_strlen(string));
	printf("%s\n", ft_strcpy(c_string, string));
	return 0;
}
