#include "../../libft.h"
void ft_putnbr_fd (int nb , int fd)
{
	long nbr = nb;
	if (nb < 0)
	{
		write (fd,"-",1);
		nbr = -nbr;
	}
	int c;
	if (nbr > 9)
		ft_putnbr_fd (nbr / 10,fd);

	c = nbr % 10 + 48;
	write(fd,&c, 1);
}	
// #include <limits.h>
// int main ()
// {
// 	ft_putnbr_fd(INT_MIN,1);
// }
