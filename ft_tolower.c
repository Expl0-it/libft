#include "libft.h"

// if c is uppercase returns it in lowercase
int	ft_tolower(int c)
{
	if ('A' <= (unsigned char)c && (unsigned char)c <= 'Z')
		c += 32;
	return (c);
}

/*
#include <stdio.h>
int	main(void)
{
	int	a = ft_tolower('A');
	printf("%c", a);
	return (0);
}
*/