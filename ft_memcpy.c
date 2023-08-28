#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;

	p_dest = (char *)dest;
	p_src = (char *)src;
	while (n > 0)
	{
		p_dest[n - 1] = p_src[n - 1];
		n--;
	}
	return (dest);
}

/*
#include <stdio.h>
int main(void)
{
	char	*a = "abcdefg";
	char	b[10];
	char	*p_b = ft_memcpy(b, a, 8);
	printf("%p, %s", p_b, b);
	return 0;
}
*/