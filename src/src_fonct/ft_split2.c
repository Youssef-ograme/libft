#include "../../libft.h"
int len_world (char *str , char c)
{
	int count = 0;
	int new = 1;
	while (*str)
	{
		if (*str != c && new)
		{
			count++;
			new = 0;
		}
		else if (*str == c)
			new = 1;
		str++;
	}
	return count;
}

char **ft_split (const char *s , char c)
{
	char *str = ft_strdup(s);
	char *save = str;
	if (!str)
		return NULL;
	char **stack = malloc ((len_world(str,c) + 1)* sizeof(char *));
	if (!stack)
		return NULL;
	int new = 1;
	int index = 0;
	char *start;
	while (*str)
	{
		if (*str != c && new )
		{  
			new = 0;
			start = str;
		}
		else if (*str == c)
		{
			*str = '\0';
			stack[index] = ft_strdup(start);
			if (!stack[index])
			{
				while (index >= 0)
					free(stack[index--]);
				free(stack);
				return NULL;
			}
			index++;
			new = 1;
		}
		str++;
	}
	if (!new)
		stack[index++] = ft_strdup(start);
	stack[index] = NULL;
	free(save);
	return stack;
}

int main ()
{
	char *str = "hello,hjdfh,ehfjkhe,jhfh,ikhaaaaas,n";
	char **res = ft_split(str ,',');
	char **temp = res;
	if (res)
	{
		while (*temp)
			printf ("%s\n",*temp++);
	}
	free(res);
}
