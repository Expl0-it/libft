#include "libft.h"

//duplicates the string and returns it
char	*ft_strdup(const char *s)
{
	char	*new;

	new = ft_strnew(ft_strlen(s));
	ft_memcpy(new, s, ft_strlen(s) + 1);
	return (new);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*a = ft_strdup("abc");
	printf("%s", a);
	return (0);
}
*/