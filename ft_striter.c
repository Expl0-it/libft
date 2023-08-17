#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(s[i]);
			i++;
		}
	}	
}

/*
TODO
#include <stdio.h>
int main(void)
{
	char	*str = "42";
	ft_striter(str, //function);
	return 0;
}
*/