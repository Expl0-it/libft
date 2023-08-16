#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		s[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>
int main(void)
{
	char	str[3] = "42";
	ft_strclr(str);
	printf("%s", str);
	return 0;
}
*/