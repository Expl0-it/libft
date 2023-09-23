#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	trimmed = NULL;
	if (s1 && set)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
			end--;
		trimmed = ft_strnew(end - start);
		ft_strlcpy(trimmed, &s1[start], end - start + 1);
	}
	return (trimmed);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*a = ft_strtrim("   \t  abc      ", "\t c");
	printf("%s", a);
	return (0);
}
*/