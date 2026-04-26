#include "../../libft.h"
size_t ft_strlcpy(char *dest, const char *src, size_t dsize)
{
    size_t i = 0;
    // dsize = 2 --> hello
    // size_src = 5 
    // 5 - 1 = 4
    //hello
    //01234

    size_t len_src = ft_strlen(src);
    if (dsize > 0)
    {
         while (src[i] && i < dsize - 1)
         {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return len_src;
}

// int main ()
// {
//     char src[] = "hello my brother";
//     char dest[6];
//     // dsize = 10 
//     // len_src = 5
//     int len = ft_strlcpy(dest,src,sizeof(dest));
//     printf ("%s\n",dest);
//     printf ("%d\n",len);
// }