/* TODO */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamichal <mamichal@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:49:04 by mamichal          #+#    #+#             */
/*   Updated: 2024/02/19 13:53:27 by mamichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/** @brief Separate stirngs and put into the array
 * 
 * 	Allocates (with malloc(3)) and returns an array
 * 	of strings obtained by splitting ’s’ using the
 * 	character ’c’ as a delimiter. The array must be
 * 	ended by a NULL pointer
 * 
 * 	@param s The string to be split
 * 	@param c The delimiter character
 *  @return The array of new strings resulting from the split or NULL if the allocation fails
 */

char	**ft_split(char const *s, char c)
{
	if (s[0] == 0 && c == 0)
		return  (0);
	else
		return (NULL);
}

/*
#include <stdio.h>
int main (void)
{
	char **strings = ft_split("abc a avsdjicji a  ", ' ');
	printf("%s", strings[0]);
	printf("%s", strings[1]);
	printf("%s", strings[2]);
	return (0);
}
*/
