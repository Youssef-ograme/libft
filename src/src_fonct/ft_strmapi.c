#include "../../libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *stack = malloc(ft_strlen(s) + 1);
    if (!stack)
        return NULL;
    char *dest = stack;
    unsigned int i = 0;
    while (*s)
    {
        *dest = f(i, *s);
        dest++;
        s++;
        i++;
    }
    *dest = '\0';
    return stack;
}

// int main ()
// {
// 	char *str = "hello";
// 	printf ("%s",ft_strmapi,ft_toupper)
// }
