#include "libft.h"

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