#include "../includes/libft.h"

/** @brief Locate character in string.
 * 
 * 	The strchr() function returns a pointer to the 
 *	first occurrence of the character c in the string s.
 * 	The terminating null byte is considered part of the string,
 *  so that if c is specified as '\0', these
 * 	functions return a pointer to the terminator.
 * 
 *  @param s string to scan in
 * 	@param c character to scan for (unsigned char)
 *  @return pointer to the matched character or NULL if the character is not found
 */
char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return NULL;
}

/*
#include <stdio.h>

int main(void)
{
	char	*a = strchr("abcdb", 'b');
	char	*b = ft_strchr("abcdb", 'b');
	printf("%s\n%s\n", a, b);
	return (0);
}
*/