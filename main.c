#include "libasm.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;
	t_list	*p;

	last = lst;
	p = last;
	while (last != NULL)
	{
		p = last;
		last = last->next;
	}
	return (p);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	if ((p = ft_lstlast(*lst)) != NULL)
		p->next = new;
}

int		ft_lstsize_libft(t_list *lst)
{
	int		i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_list	*ft_lstnew(void *content)
{
	t_list *node;

	if (!(node = malloc(sizeof(t_list))))
		return (NULL);
	node->data = content;
	node->next = NULL;
	return (node);
}

int main()
{
	char string[7];
	char c_string[7];
	char buf[5];
	char	*a;
	char	*b;
	size_t	index;
	t_list	*test_list;
	t_list	*out_test;

	out_test = NULL;
	index = 0;
	while (index < 5)
	{
		ft_lstadd_back(&out_test, ft_lstnew("hello\n"));
		index++;
	}
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
	printf("\n---------------------------\n");
	printf("libasm: %d\n", ft_list_size(out_test));
	printf("libft: %d\n", ft_lstsize_libft(out_test));
	return 0;
}
