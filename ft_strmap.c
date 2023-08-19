#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int	i;
	char	*new;

	if (f && s)
	{
		i = 0;
		new = ft_strnew(ft_strlen(s));
		while (new[i])
		{
			new[i] = f(new[i]);
			i++;
		}	
		return (new);
	}
	return (NULL);
}

/**/
char	f(char c)
{
	if (c >= 32 && c <= 125)
	{
		c = c + 1;
	}
	
	return (c);
}

#include <stdio.h>
int main(void)
{
	char	*b = "abc";
	char	*a = ft_strmap(b, f);
	printf("%s", a);
	return 0;
}
