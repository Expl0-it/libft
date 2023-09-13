#include "libft.h"

//allocates size bytes of protected memory and fills it with value 0
void	*ft_memalloc(size_t size)
{
	void    *memory;
	memory = malloc(size);
	if (!memory)
	{
		return (NULL);
	}
	ft_bzero(memory, size);
	return (memory);
}

/*
#include <stdio.h>
int main(void)
{
	void	*memory = ft_memalloc(4);
	printf("%p", memory);
	free(memory);
	return 0;
}
*/