#include "libft.h"

/** @brief Locate character in reversed string.
 * 
 * 	The strrchr() function returns a pointer to the last
 *  occurrence of the character c in the string s.
 * 	The terminating null byte is considered part of the string,
 *  so that if c is specified as '\0', these
 * 	functions return a pointer to the terminator.
 * 
 *  @param s string to scan in
 * 	@param c character to scan for (unsigned char)
 *  @return pointer to the matched character or NULL if the character is not found
 */
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	s += i;
	while (i >= 0)
	{
		if (*s == c)
			return ((char *)s);
		s--;
		i--;
	}
	return NULL;
}

/*
#include <stdio.h>

int main(void)
{
	char	*a = strrchr("abcdb", 'b');
	char	*b = ft_strrchr("abcdb", 'b');
	printf("%s\n%s\n", a, b);
	return (0);
}
*/