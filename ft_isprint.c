#include "libft.h"

//checks if the given value is printable
int	ft_isprint(int c)
{
	if (' ' <= (unsigned char)c && (unsigned char)c <= '~')
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	a = ft_isprint('\0');
	printf("%d", a);
	return (0);
}
*/