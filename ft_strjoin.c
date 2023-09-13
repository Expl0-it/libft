#include "libft.h"

//allocates memory and returns concateneted strings
char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	char	*new;

	i = 0;
	new = ft_strnew(strlen(s1) + strlen(s2));
	while (*s1)
	{
		new[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		new[i] = *s2;
		s2++;
		i++;
	}
	return (new);
}

/*
#include <stdio.h>
int main(void)
{
	char	*a = ft_strjoin("abc", "def");
	printf("%s", a);
	return (0);
}
*/