#include "libft.h"

//checks if the value is alphanumeric
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	a = ft_isalnum('0');
	printf("%d", a);
	return (0);
}
*/