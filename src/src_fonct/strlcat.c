// size_t strlcat(char dst[restrict .dsize], const char *restrict src,size_t dsize);
// "hello"
// "brother"

#include "../../libft.h"
size_t ft_strlcat(char *dest, const char *src, size_t dsize)
{
    size_t len_dest = ft_strlen(dest);
    size_t len_src = ft_strlen(src);
    if (dsize == 0)
        return len_src;
    if (dsize <= len_dest)
        return dsize + len_src;
    size_t i = 0;
    size_t temp = len_dest;
    while (src[i] && i < dsize - len_dest - 1)
        dest[temp++] = src[i++];
    dest[temp] = '\0';
    return len_src + len_dest;
}

// int main ()
// {
//      char src[] = "abc";

//     char dest[] = "hello";
    
//     printf ("size = %d \n",ft_strlcat(dest, src, 4));
//     printf ("%s",dest);
// }