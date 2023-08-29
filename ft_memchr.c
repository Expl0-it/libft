#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p_s;
	size_t i;

	p_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*p_s == (unsigned char)c)
			return (p_s);
		i++;
		p_s++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*a = "abcd\0w";
	char	*b = (char *)ft_memchr(a, 'w', 6);
	printf("%s", b);
	return (0);
}
*/