#include <stdio.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);

int main()
{
	char string[7];
	char c_string[7];

	string[0] = 'h';
	string[1] = 'o';
	string[2] = 'l';
	string[3] = 'a';
	string[4] = '!';
	string[5] = '1';
	printf("%zu\n", ft_strlen(string));
	ft_strcpy(c_string, string);
	printf("%s\n", c_string);
	printf("%d\n", ft_strcmp("hell", "hel"));
	return 0;
}
