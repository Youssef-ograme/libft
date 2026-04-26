#include "../../libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	if (len < start)
		return NULL;
	const char *str = s + start;
	char *stack = malloc (len + 1);
	if (!stack)
		return NULL;
	char *dest = stack;
		while (*str && start++ <= len)
			*stack++ = *str++;
	*stack = '\0';
	return dest;
}

// int main ()
// {
// 	char str[] = "hello";
// 	printf("%s",ft_substr(str,0,3));
// }
