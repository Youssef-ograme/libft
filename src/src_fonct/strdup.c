#include "../../libft.h"
char *ft_strdup(const char *s)
{
    int i = 0 , j = 0;
    size_t len = ft_strlen(s);
    char *ptr = malloc (len + 1);
    if (!ptr)
        return NULL;
    while (s[i])
        ptr[j++] = s[i++];
    ptr[j] = '\0';
    return ptr;
}

