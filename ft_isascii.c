#include "libft.h"

int	ft_isascii(int c)
{
	if ((unsigned char)c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	a = ft_isascii('A');
	printf("%d", a);
	return (0);
}
*/