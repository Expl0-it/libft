#include "libft.h"

/** @brief Allocate dynamic memory.
 *
 *  The calloc() function allocates memory for an
 *  array of nmemb elements of size bytes each and
 *  returns a 	pointer to the allocated memory.
 *  The memory is set to zero. If nmemb or size is 0,
 *  then calloc() returns either NULL, or a unique pointer
 *  value that can later be successfully passed to free().
 *
 *  @param nmemb number of elements to allocate
 * 	@param size size of each element to allocate
 *  @return pointer to the allocated memory, NULL on error or if any params = 0
 */
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