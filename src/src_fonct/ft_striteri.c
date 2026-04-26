#include "../../libft.h"
void ft_striteri(char *s, void (*f)(unsigned int,char *))
{
	int i = 0;
	while (s[i])
	{
		f(i,&s[i]);
		i++;
	}

}

void print(unsigned int i ,char *c)
{
	printf ("%d --> %c \n",i,*c);
}

// int main ()
// {
// 	char *str = "wax a sahbi";
// 	ft_striteri (str,print);
// }
