/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmichali <mmichali@student.42.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:32:38 by mmichali          #+#    #+#             */
/*   Updated: 2023/07/19 17:46:37 by mmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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