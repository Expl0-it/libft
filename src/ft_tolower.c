#include "../includes/libft.h"

/** @brief Convert letter to lower case.
 * 
 * 	Converts the letter c to lower case, if possible.
 * 	If c is not an unsigned char value, or EOF,
 *  the behavior of these functions is undefined.
 * 
 * 	@param c letter to convert
 *  @return converted letter, or c if the conversion was not possible
 */
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