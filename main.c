#include "libasm.h"

int main()
{
	char string[7];
	char c_string[7];
	char buf[5];
	char	*a;
	char	*b;

	string[0] = 'h';
	string[1] = 'o';
	string[2] = 'l';
	string[3] = 'a';
	string[4] = '!';
	string[5] = '1';
	printf("about ft_strlen.s\n");
	printf("%zu\n", ft_strlen(""));
	printf("---------------------------\n");
	printf("about ft_strcpy.s\n");
	ft_strcpy(c_string, string);
	printf("%s\n", c_string);
	printf("---------------------------\n");
	printf("about ft_strcmp.s\n");
	printf("%d\n", ft_strcmp("123", "1234"));
	printf("---------------------------\n");
	printf("about ft_write.s\n");
	ft_write(1, "hello world\n", 12);
	ft_write(-1, "hello world\n", 12);
	printf("my error no: %d\n", errno);
	write(-1, "hello world\n", 12);
	printf("original error no: %d\n", errno);
	printf("\n---------------------------\n");
	printf("about ft_read.s\n");
	ft_read(0, &buf, 4);
	printf("\n---------------------------\n");
	printf("about ft_strdup\n");
	b = strdup("hoba2\n");
	printf("%s\n", b);
	a = ft_strdup("hoba\n");
	printf("%s", a);
	return 0;
}
