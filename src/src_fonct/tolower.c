#include "../../libft.h"
int ft_tolower (int c)
{
    return (c >= 65 && c <= 90) ? c + 32 : c;
}

// int main ()
// {
//     printf ("%c",ft_tolower(65));
// }