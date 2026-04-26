#include "../../libft.h"
void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr = malloc (nmemb * size);
    if (!ptr)
        return NULL;
    ft_bzero(ptr,nmemb);
    return ptr;
}

// int main()
// {
//     int nb = 10;
//     int *arr = ft_calloc (nb,sizeof(int));
//     int i = 0;
//     while (i < nb)
//         printf ("%d",arr[i++]);
// }