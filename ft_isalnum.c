#include "libft.h"

/** @brief checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
 *
 * 	check whether c, which must have the value of an unsigned char
 *  falls into a certain character class according to the current locale.
 *
 *  @param c int value of character in character encoding
 *  @return 1 if true, 0 if false
 */
int ft_isalnum(int c)
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