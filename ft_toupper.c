#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= (unsigned char)c && (unsigned char)c <= 'z')
		c -= 32;
	return (c);
}

/*
#include <stdio.h>
int	main(void)
{
	int	a = ft_toupper('a');
	printf("%c", a);
	return (0);
}
*/