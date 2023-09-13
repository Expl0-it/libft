#include "libft.h"

//frees memory pointed by ap and sets pointer to NULL
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