#include "../includes/libft.h"

/** @brief Allocate dynamic memory.
 * 
 * 	Allocates (with malloc(3)) and returns a “fresh” memory
 * 	area. The memory allocated is initialized to 0. If the allocation fails,
 *  the function returns NULL
 * 
 *  @param size the size of the memory that needs to be allocated
 *  @return the allocated memory area
 */
void	*ft_memalloc(size_t size)
{
	void	*memory;
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