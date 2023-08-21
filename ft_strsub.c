#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	unsigned int	i;
	unsigned int	j;

	sub = ft_strnew(len);
	i = 0;
	j = 0;
	while (i < start)
	{
		i++;
	}
	while (j < len)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	return (sub);
}

/*
#include <stdio.h>
int main(void)
{
    char    *a = ft_strsub("abcdefghijk", 3, 5);
    printf("%s", a);
    return (0);
}
*/