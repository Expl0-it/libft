#include "libft.h"

/*copies size bytes of memory or until encounters int value c
returns pointer to char after c or NULL if no c in src*/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	while (n-- > 0)
	{
		*p_dest = *p_src;
		if (*p_src == (unsigned char)c)
			return ((void *)p_dest + 1);
		p_src++;
		p_dest++;
		
	}
	return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
	char	*a = "abcdefg";
	char	b[10];
	char	*p_b = ft_memccpy(b, a, 'c', 8);
	printf("%s, %s", p_b, b);
	return 0;
}
*/