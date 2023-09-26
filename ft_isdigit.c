#include "libft.h"

/** @brief checks for a digit (0 through 9).
 *
 * 	check whether c, which must have the value of an unsigned char
 *  falls into a certain character class according to the current locale.
 *
 *  @param c int value of character in character encoding
 *  @return 1 if true, 0 if false
 */
int ft_isdigit(int c)
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