#include "../../libft.h"
int ft_isalpha (int C)
{
    return ((C >= 65 && C <= 90) || (C >= 97 && C <= 122));
}