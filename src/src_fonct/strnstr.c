#include "../../libft.h"
// hello brother
char *ft_strnstr(const char *big,	const char *needle, size_t len)
{
    size_t len_needle = ft_strlen(needle);
    if (len_needle == 0)
            return (char *)big;
    size_t i = 0;
    while (big[i] && i + len_needle <= len)
    {
        if (ft_strncmp(big + i , needle, len_needle) == 0)
                return (char *)big + i;
        i++;
    }
    return NULL;
}

// int main ()
// {
//     char big[] = "hello brother";
//     char needle[] = "bro";
//     printf ("%s",ft_strnstr(big,needle,22));

// }