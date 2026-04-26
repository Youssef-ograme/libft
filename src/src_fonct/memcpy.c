#include "../../libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *ptr =  (unsigned char *) dest;
   // printf ("%d",sizeof(dest));
   unsigned char *str = (unsigned char *) src;
    size_t i = 0;
    while (i < n)
    {
        ptr[i] = str[i];
        i++;
    }
    return dest;
}

// int main()
// {
//     int src[3] = {1,2,3};
//     int dest[3];
//     ft_memcpy(dest,src,sizeof(dest));
//     int i = 0;
//     while (i < 3)
//     printf ("%d",dest[i++]);
// }