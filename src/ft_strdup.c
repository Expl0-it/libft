/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamichal <mamichal@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:47:43 by mamichal          #+#    #+#             */
/*   Updated: 2024/02/01 19:47:44 by mamichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/** @brief Duplicate a string.
 * 
 * 	The strdup() function returns a pointer to a new string which is a duplicate of the string s.
 *  Memory for the new string is obtained with malloc(3), and can be freed with free(3).
 *
 *  @param s string to duplicate
 *  @return a pointer to the duplicated string, or NULL if insufficient memory was available.
 */
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
