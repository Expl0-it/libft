#include "../includes/libft.h"

/** @brief Allocate a modified string.
 * 
 * 	Applies the function ’f’ to each character of the
 * 	string ’s’ to create a new string (with malloc(3))
 * 	resulting from successive applications of ’f’.

 *
 *  @param s the reference string
 * 	@param f the function to apply to each character
 *  @return the string created from the successive applications of ’f’. Returns NULL if the allocation fails
 */
char	*ft_strmap(char const *s, char (*f)(char))
{
	int	i;
	char	*new;

	if (f && s)
	{
		i = 0;
		new = ft_strnew(ft_strlen(s));
		while (s[i])
		{
			new[i] = f(s[i]);
			i++;
		}	
		return (new);
	}
	return (NULL);
}

/*

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
*/