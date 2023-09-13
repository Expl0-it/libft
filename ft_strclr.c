#include "libft.h"

//sets all the values in string s to 0
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
	printf("%s\n", str);
	ft_strclr(str);
	printf("%s\n", str);
	return 0;
}
*/