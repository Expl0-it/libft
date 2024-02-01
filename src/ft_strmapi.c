/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamichal <mamichal@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:41:22 by mamichal          #+#    #+#             */
/*   Updated: 2024/02/01 19:41:29 by mamichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
