#include "libft.h"

/* concatanates size bytes of 2 strings
returns length of new string */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length;

	length = ft_strlen(src) + ft_strlen(dst);
	while (*dst)
	{
		dst++;
		if (size > 0)
			size--;
	}
	while (size > 1)
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	if (size > 0)
	{
		*dst = 0;
	}
	return (length);
}

/*
#include <stdio.h>
int main(void)
{
	char	a[10] = "abc";
	int num = ft_strlcat(a, "def", 2);
	printf("%d, %s", num, a);
	return (0);
}
*/