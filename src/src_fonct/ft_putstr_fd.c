#include "../../libft.h"
void ft_putstr_fd (char *s , int fd)
{
	while (*s)
		write(fd,s++,1);
}

// int main ()
// {
// 	char *str = "hello fin a zid hh";
// 	ft_putstr_fd(str,1);
// }
