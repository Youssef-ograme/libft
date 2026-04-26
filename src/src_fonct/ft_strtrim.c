#include "../../libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
	const char *end = (char *)s1;
	const char *start = (char *)s1;
	while (*end)
		end++;
	end--;

	while (*end && ft_strchr(set,*end))
		end--;

	while (*start && ft_strchr(set,*start))
		start++;
	if (start > end)
		return ft_strdup("");
	char *stack = malloc((end - start + 1) + 1);
	if (!stack)
		return NULL;
	char *dest = stack;
	while (start <= end)
			*stack++ = *start++;
	*stack = '\0';
	return dest;
}

// int main ()
// {
// 	char s1[] = "xxxxxxxx";
// 	char set[] = "x";
// 	printf("%s",ft_strtrim(s1,set));
// }
