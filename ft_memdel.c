#include "libft.h"

/** @brief Takes as a parameter the address of a memory area that needs 
 *	to be freed with free(3), then puts the pointer to NULL
 *
 *  @param ap pointer’s address that needs its memory freed and set to NULL.
 *  @return Void
 */
void	ft_memdel(void **ap)
{
	if (ap != NULL && *ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}		
}

/*
#include <stdio.h>
int main(void)
{
	//void	*memory = ft_memalloc(4);
	//void	*memory = malloc(4*sizeof(char));
	printf("%p\n", memory);
	ft_memdel(&memory);
	printf("%p\n", memory);
	return 0;
}
*/