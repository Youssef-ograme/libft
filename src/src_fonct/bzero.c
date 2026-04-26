#include "../../libft.h"
void ft_bzero (void *buffer , size_t n)
{
    unsigned char *ptr = (unsigned char *) buffer;
    size_t i = 0;
    while (i < n)
        ptr[i++] = 0;
}

