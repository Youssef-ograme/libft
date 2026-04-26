#include "../../libft.h"
void *ft_memset(void *str, int c, size_t len)
{
	unsigned char *ptr = (unsigned char *) str;
	size_t i = 0;
    while (i < len)
        ptr[i++] = (unsigned char) c;
    return str;

}

// int main ()
// {
//     int arr[10];
//     ft_memset(arr ,'a', sizeof(arr));
//     int i = 0;
//     while (i < 10)
//     {
//         printf ("%d\n",arr[i]);
//         i++;
//     }

// }