#include "../../libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
	char *stack = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!stack)
		return NULL;
	char *dest = stack;
	while (*s1)
		*stack++ = *s1++;
	while (*s2)
		*stack++ = *s2++;
	*stack = '\0';
	return dest;
}

// int main ()
// {
// 	char s1[] = "hello";
// 	char s2[] = " brother";
// 	printf ("%s",ft_strjoin(s1,s2));
// }
