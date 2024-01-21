#include "../includes/libft.h"

/** @brief Checks for any printable character including space.
 *
 * 	Check whether c, which must have the value of an unsigned char
 *  falls into a certain character class according to the current locale.
 *
 *  @param c int value of character in character encoding (unsigned char)
 *  @return 1 if true, 0 if false
 */
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