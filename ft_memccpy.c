#include "libft.h"

/** @brief copies no more than n bytes from memory area src to memory area dest,
 * 	stopping when the character c is found.
 * 	If the memory areas overlap, the results are undefined.
 *
 * 	@param dest memory area to copy to
 * 	@param src memory area to copy from
 *  @param c int value of character to be found within memory
 * 	@param n maximal number of bytes to copy
 *  @return a pointer to the next character in dest after c, or NULL if c was not found in the first n
 *  characters of src
 */
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