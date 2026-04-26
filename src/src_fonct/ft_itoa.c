#include "../../libft.h"
int len_nbr (unsigned int nb)
{
	int count = 0;
	if (nb == 0)
		return 1;
	while (nb > 0)
	{
		count++;	
		nb /= 10;
	}
	return count;
}

char *ft_itoa (int nb)
{
	int plus = 0 , count ;
	unsigned int val = nb;
	if (nb < 0)
	{
		plus = 1;
		val = (unsigned int ) (-nb);
	}
	count = len_nbr (val) + 
	plus;
	char *str = malloc (count + 1);
	str[count] = '\0';
	count--;
	if (plus)
		str[0] = '-';
	while (val > 0)
	{
		str[count--] = (val % 10) + 48;
		val /= 10;
	}
	return str;
}
