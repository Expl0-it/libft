#include "libft.h"

/** @brief Locate a substrin.
 * 
 * 	Finds the first occurrence
 *  of the substring needle in the string haystack.
 *  The terminating null bytes ('\0') are not compared.
 * 	Scans at most n bytes.
 * 
 * 	@param haystack a string to scan
 * 	@param needle a string to find
 * 	@param n maximal number of bytes to scan
 *  @return pointer to the beginning of the substring, or NULL if the substring is not found
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack[i + j] == needle[j] &&
		 needle[j] != 0 && (i + j) < n)
			j++;
		if (needle[j] == 0)
		{
			haystack += i;
			return ((char *)haystack);
		}
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char *a = ft_strnstr("abcdbadx", "bad", 7);
	printf("%s", a);
	return 0;
}
*/