#include "libft.h"

//allocates a new string and returns it
char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}

/*
#include <stdio.h>
int main(void)
{
	char	*str = ft_strnew(2);
	printf("%p", str);
	free(str);
	return 0;
}
*/