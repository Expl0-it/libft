#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*new;

	if (f && s)
	{
		i = 0;
		new = ft_strnew(ft_strlen(s));
		while (s[i])
		{
			new[i] = f(i, s[i]);
			i++;
		}	
		return (new);
	}
	return (NULL);
}

/*

char	f(unsigned int index, char c)
{
	if (c >= 32 && c <= 125)
	{
		c = c + 1;
		index++;
	}
	
	return (c);
}

#include <stdio.h>
int main(void)
{
	char	*b = "abc";
	char	*a = ft_strmapi(b, f);
	printf("%s", a);
	return 0;
}
*/