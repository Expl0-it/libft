#include "libft.h"

/** @brief Allocate a substring.
 * 
 * 	Allocates (with malloc(3)) and returns a “fresh” substring
 * 	from the string given as argument. The substring begins at
 * 	indexstart and is of size len. If start and len aren’t refering
 *  to a valid substring, the behavior is undefined. If the
 * 	allocation fails, the function returns NULL.
 * 
 * 	@param s string from which create the substring
 * 	@param start starting index of the substring
 * 	@param len maximum size of the substring
 *  @return the allocated substring
 */
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = start;
	substr = ft_strnew(len);
	while (s && j < len)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	return (substr);
}

/*
#include <stdio.h>
int main(void)
{
	char	*str = ft_substr("abcdefg", 3, 3);
	printf("%s", str);
	free(str);
	return (0);
}
*/