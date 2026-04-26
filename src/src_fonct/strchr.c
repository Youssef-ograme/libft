#include "../../libft.h"
char *ft_strchr (const char *s , int c)
{
    char ch = c ;
    while (*s)
    {
        if (*s == ch)
            return (char *)s;
        s++;
    }
    return (ch == '\0') ? (char *)s : NULL;
}

// int main ()
// {
//     char s[] = "hallo";
//     printf ("%s",ft_strchr(s,'a'));
// }