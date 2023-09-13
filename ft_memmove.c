#include "libft.h"

/*copies n bytes of memory to a temp array and then puts it in dest
returns copied memory*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p_src;
	char	*p_dest;
	char	temp[n];

	p_src = (char *)src;
	p_dest = (char *)dest;
	ft_memcpy(temp, p_src, n);
	if (p_src < p_dest)
	{
		while (n--)
			p_dest[n] = temp[n];
	}
	else
		ft_memcpy(p_dest, temp, n);
	return (dest);
}

/*
#include <stdio.h>
int main(void)
{
	char	*a = "abcdefg";
	char	b[10];

	char	*p_b = ft_memmove(b, a, 8);
	printf("%s, %s", b, p_b);
	return 0;
}
*/