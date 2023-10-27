#include "libft.h"

/** @brief Free memory area.
 * 
 * 	Takes as a parameter the address of a string that need to be
 * 	freed with free(3), then sets its pointer to NULL.
 *
 *  @param ap the string’s address that needs to be freed and its pointer set to NULL
 *  @return Void
 */
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