/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamichal <mamichal@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:32:38 by mmichali          #+#    #+#             */
/*   Updated: 2024/02/20 18:18:28 by mamichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/** @brief Calculate the length of a string.
 * 
 * 	The strlen() function calculates the length of the string s,
 *  excluding the terminating null byte ('\0').
 *
 *  @param str the string to measure
 *  @return the number of bytes in the string s
 */
int	ft_strlen(char const *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

/*
#include <stdio.h>
int main(void)
{
	int a = ft_strlen("123");
	printf("%d", a);
	return (0);
}
*/
