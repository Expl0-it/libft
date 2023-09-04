#include "libft.h"

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