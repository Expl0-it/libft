#include "../includes/libft.h"

/** @brief Size-bounded string concatenation.
 * 
 * 	The strlcat() function appends the NUL-terminated string src
 *  to the end of dst. It will append at most
 *  size - strlen(dst) - 1 bytes, NUL-terminating the result.
 *
 *  @param dst the prefix string
 * 	@param src the suffix string
 * 	@param size the (maximal numer of bytes - 1) to copy from src to dst
 *  @return the initial length of dst plus the length of src
 */
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