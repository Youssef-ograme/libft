#include "../../libft.h"
void *ft_memove (void *dest , const void *src , size_t n)
{
    char *new_dest = (char *) dest;
    const char *new_src = (const char *) src;
    if (dest < src)    
    {
        size_t i = 0;
        while (i < n)
        {
            new_dest[i] = new_src[i];
            i++;
        }
    }
    else if (dest > src)
    {
      
        while (n--)
            new_dest[n] = new_src[n];
    }
    return dest;
}

// int main ()
// {
//     char str[] = "hello";
//     char dest[6];
//     ft_memove (str + 3,str + 1,sizeof(str));
//     printf ("%s",str);

//     printf ("\n");
// //------------
//     int arr[5] = {1,2,3,4,5};
//     int dest2[5];
//     ft_memove (dest2,arr,sizeof(arr));
//     int i = 0;
//     while (i < 5)
//         printf ("%d ",arr[i++]);
// }

