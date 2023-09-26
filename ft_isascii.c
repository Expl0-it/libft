#include "libft.h"

/** @brief Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
 *
 * 	Check whether c, which must have the value of an unsigned char
 *  falls into a certain character class according to the current locale.
 *
 *  @param c int value of character in character encoding (unsigned char)
 *  @return 1 if true, 0 if false
 */
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