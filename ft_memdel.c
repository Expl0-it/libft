#include "libft.h"

void	ft_memdel(void **ap)
{
	if (*ap)
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