#include "../../libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return 0;
}
// int main ()
// {
//     char s1[] = "hkllo";
//     char s2[] = "hello";
//     printf ("%d",ft_strncmp(s1,s2,2));
// }