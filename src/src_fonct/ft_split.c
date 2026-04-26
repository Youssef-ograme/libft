#include "../../libft.h"
int count_world (char *str , char c)
{
	int i = 0;
	int count = 0;
	int new = 1;
	while (str[i])
	{
		if (str[i] != c && new)
		{
			count++;
			new = 0;
		}
		else if (str[i] == c)
			new = 1;
		i++;
	}
	return count;
}

char **ft_split (const char *s , char c)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *str = (char *)s;
	char **stack = malloc ((count_world(str,c) + 1) * sizeof (char *));
	char *dest = malloc (ft_strlen(str));
	if (!dest || !stack)
		return NULL;
	while (str[i])
	{
		if (str[i] != c)
			dest[j++] = str[i];
		else if (j > 0)
		{
			dest[j] = '\0';
			stack[k++] = ft_strdup(dest);
			j = 0;
		}
		i++;
	}
	if (j > 0)
	{
		dest[j] = '\0';
		stack[k++] = ft_strdup(dest);
	}
	stack[k] = NULL;
	free(dest);
	return stack;
}
// int main ()
// {
// 	char *str = "hello,brother,coun,ikhaa,aaaaaaan,";
// 	char **res = ft_split(str,',');
// 	if (res)
// 	{
// 		int i = 0;
// 		while (res[i])
// 			printf ("%s\n",res[i++]);
// 	}
// 	free(res);
// }
