#include "libft.h"

/* looks for a character in string staring with last char
returns pointer to that char or NULL*/
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