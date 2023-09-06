#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != 0)
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
	char *a = ft_strstr("abcdbadx", "bad");
	char *b = strstr("abacbadx", "bad");
	printf("%s, %s", a, b);
	return 0;
}
*/