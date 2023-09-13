#include "libft.h"

//compares size bytes of memory and returns the difference
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*p_s1 != *p_s2)
			return (*p_s1 - *p_s2);
		p_s1++;
		p_s2++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char	*a = "abbad";
	char	*b = "abbax";
	int num = ft_memcmp(a, b, 5);
	printf("%d", num);
	return (0);
}
*/