#include "libft.h"

//checks if the value is alphabetical
int	ft_isalpha(int c)
{
	if (('A' <= (unsigned char)c && (unsigned char)c <= 'Z')
	|| ('a' <= (unsigned char)c && (unsigned char)c <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	a = ft_isalpha('A');
	printf("%d", a);
	return (0);
}
*/