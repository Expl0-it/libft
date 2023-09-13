#include "libft.h"

//frees the string, sets pointer to NULL
void ft_strdel(char **as)
{
	if (as != NULL && *as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}

/*
#include <stdio.h>
int main(void)
{
	char	*str = ft_strnew(2);
	printf("%p\n", str);
	ft_strdel(&str);
	printf("%p\n", str);
	return 0;
}
*/