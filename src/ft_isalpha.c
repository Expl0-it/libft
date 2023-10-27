#include "../includes/libft.h"

/** @brief Checks for an alphabetic character.
 *
 * 	Check whether c, which must have the value of an unsigned char
 *  falls into a certain character class according to the current locale.
 *
 *  @param c int value of character in character encoding (unsigned char)
 *  @return 1 if true, 0 if false
 */
int	ft_isalpha(int c)
{
	if (('A' <= (unsigned char)c && (unsigned char)c <= 'Z') || ('a' <= (unsigned char)c && (unsigned char)c <= 'z'))
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