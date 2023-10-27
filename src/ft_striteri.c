#include "../includes/libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	index = 0;
	if (s && f)
	{
		while (s[index])
		{
			f(index, &s[index]);
			index++;
		}
	}	
}

/*
TODO

#include <stdio.h>
int main(void)
{
	char	*str = "42";
	ft_striter(str, f);
	return 0;
}
*/