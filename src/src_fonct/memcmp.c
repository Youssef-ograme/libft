#include "../../libft.h"
int ft_memcmp (const void *s1 , const void *s2 , size_t n)
{
    const unsigned char *str1 = (const unsigned char *)s1;
    const unsigned char *str2 = (const unsigned char *)s2;
    size_t i = 0;
    // hello
    // hel
    while (i < n)
    {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

// int main ()
// {
//     char s1[] = "hello";
//     char s2[] = "hjkdj";
//     printf ("%d",ft_memcmp(s1,s2,3));
// }