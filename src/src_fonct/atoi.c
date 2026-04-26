#include "../../libft.h"
int ft_atoi(const char *nptr)
{
    int signe = 1;
    int res = 0;
    while (*nptr == ' ')
            nptr++;
    if (*nptr == '+' || *nptr == '-')
    {
        if(*nptr == '-')
            signe *= -1;
        nptr++;
    }
    while (*nptr >= '0' && *nptr <= '9')
    {
        res = res * 10 + *nptr - 48;
        nptr++;
    }
    return res * signe;
}

// int main ()
// {
//     char str[] = "      -12hh";
//     printf ("%d",ft_atoi(str));
// }
