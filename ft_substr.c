#include "libft.h"

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