/* TODO */
#include <stdio.h>
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

static int	count_words(char const *s, char c);

//static char	*fill_word(const char *s, int start, int end);

//static void	*error_free(char **strs, int count);

char	**ft_split(char const *s, char c)
{
	printf("%d", count_words(s, c));
	return (NULL);
}

static int	count_words(char const *s, char c)
{
	int	count;
	int	trigger;
	int	i;

	count = 0;
	trigger = 0;
	i = 0;
	while(s[i])
	{
		if (s[i] != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (s[i] == c)
			trigger = 0;
		i++;
	}
	return (count);
}
/*
*/
int main (void)
{
/*	char **strings =*/ ft_split(" ", ' ');
/*
 	printf("%s", strings[0]);
	printf("%s", strings[1]);
	printf("%s", strings[2]);
*/
	return (0);
}
