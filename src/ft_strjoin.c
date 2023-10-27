#include "../includes/libft.h"

/** @brief Concatanate strings.
 * 
 * 	Creates (with malloc(3)) and returns a “fresh” allocated string ending with ’\0’,
 *  result of the concatenation of s1 and s2. If the allocation fails
 *  the function returns NULL.
 *
 *  @param s1 the prefix string
 * 	@param s2 the suffix string
 *  @return The “fresh” allocated string result of the concatenation of the 2 strings
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	char	*new;

	i = 0;
	new = ft_strnew(strlen(s1) + strlen(s2));
	while (*s1)
	{
		new[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		new[i] = *s2;
		s2++;
		i++;
	}
	return (new);
}

/*
#include <stdio.h>
int main(void)
{
	char	*a = ft_strjoin("abc", "def");
	printf("%s", a);
	return (0);
}
*/