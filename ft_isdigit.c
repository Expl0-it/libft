#include "libft.h"

//checks if the given value is numerical
int	ft_isdigit(int c)
{
	if ('0' <= (unsigned char)c && (unsigned char)c <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	a = ft_isdigit('0');
	printf("%d", a);
	return (0);
}
*/