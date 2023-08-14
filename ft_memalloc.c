#include "libft.h"
void	*ft_memalloc(size_t size)
{
	void    *memory = malloc(size);
	if (!memory)
	{
		return (NULL);
	}
	char	*set = memory;
	while (size != 0)
	{
		*set = 0;
		set++;
		size--;
	}
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