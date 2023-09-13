#include "libft.h"

/* copies size bytes of string terminated by 0
returns length of new string */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	length;

	length = 0;
	if (size == 0)
	{
		while (src[length])
			length++;
		return (length);
	}
	while (length < size - 1 && src[length] != '\0')
	{
		dst[length] = src[length];
		length++;
	}
	if (length < size)
		dst[length] = '\0';
	while (src[length] != '\0')
		length++;
	return (length);
}

/*
#include <stdio.h>
int main(void)
{
	char	str[10];
	size_t a = ft_strlcpy(str, "abcdfqewfef", 5);
	printf("%d, %s", a, str);
	return (0);
}
*/