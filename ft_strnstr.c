#include "libft.h"

/* looks for a string needle in no more than n bytes of haystack
returns pointer starting with needle or NULL*/
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