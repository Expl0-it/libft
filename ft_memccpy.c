#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*p_dest;
	char	*p_src;

	p_dest = (char *)dest;
	p_src = (char *)src;
	while (n-- > 0)
	{
		*p_dest = *p_src;
		if (*p_src == (char)c)
			return ((void *)p_dest + 1);
		p_src++;
		p_dest++;
		
	}
	return (NULL);
}

/**/
#include <stdio.h>
int main(void)
{
	char	*a = "abcdefg";
	char	b[10];
	char	*p_b = ft_memccpy(b, a, 'c', 8);
	printf("%s, %s", p_b, b);
	return 0;
}