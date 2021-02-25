#include <stdio.h>
#include <errno.h>
#include <unistd.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fildes, const void *buf, size_t nbytes);

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
	printf("about ft_strlen.s\n");
	printf("%zu\n", ft_strlen(string));
	printf("---------------------------\n");
	printf("about ft_strcpy.s\n");
	ft_strcpy(c_string, string);
	printf("%s\n", c_string);
	printf("---------------------------\n");
	printf("about ft_strcmp.s\n");
	printf("%d\n", ft_strcmp("", ""));
	printf("---------------------------\n");
	printf("about ft_write.s\n");
	ft_write(-1, "hello world\n", 12);
	printf("my error no: %d\n", errno);
	write(-1, "hello world\n", 12);
	printf("original error no: %d\n", errno);
	printf("\n---------------------------\n");
	return 0;
}
