#include "libft.h"

//allocates nmemb memory areas of size bytes
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p_memory;
	size_t	memory_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory_size = nmemb * size;
	p_memory = ft_memalloc(memory_size);
	return (p_memory);
}

/*
#include <stdio.h>
int	main(void)
{
	int	*a = (int *)ft_calloc(25, sizeof(int));
	printf("%p", a);
	return (0);
}
*/