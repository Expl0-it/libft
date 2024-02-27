/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamichal <mamichal@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:46:43 by mamichal          #+#    #+#             */
/*   Updated: 2024/02/27 11:29:27 by mamichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

/** @brief Allocate a substring.
 * 
 * 	Allocates (with malloc(3)) and returns a “fresh” substring
 * 	from the string given as argument. The substring begins at
 * 	indexstart and is of size len. If start and len aren’t refering
 *  to a valid substring, the behavior is undefined. If the
 * 	allocation fails, the function returns NULL.
 * 
 * 	@param s string from which create the substring
 * 	@param start starting index of the substring
 * 	@param len maximum size of the substring
 *  @return the allocated substring
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		i;
	size_t		j;

	j = 0;
	i = start;
	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (s && j < len)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	return (substr);
}

/*
#include <stdio.h>
int main(void)
{
	char	*str = ft_substr("abcdefg", 3, 3);
	printf("%s", str);
	free(str);
	return (0);
}
*/
