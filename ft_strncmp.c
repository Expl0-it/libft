/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmichali <mmichali@student.42.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:20:40 by mmichali          #+#    #+#             */
/*   Updated: 2023/08/02 11:23:34 by mmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @brief Compare two strings.
 * 
 * 	compares the two strings s1 and s2. It returns an integer
 *  less than, equal to, or greater than zero if s1 is found,
 *  respectively, to be less than, to match, or be greater than s2.
 *  It only compares the first (at most) n bytes of s1 and s2.
 * 
 * 	@param s1 first string to compare
 * 	@param s2 second string to compare
 * 	@param n maximum number of bytes to compare
 *  @return integer less than, equal to, or greater than zero 
 */
int	ft_strncmp(char *s1, char *s2, size_t n)
{
	while (*s1 && (unsigned char)*s1 == (unsigned char)*s2 && n)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20] = "aba";
	char s2[20] = "aba";
	int a = ft_strncmp(s1, s2, 3);
	int b = strncmp(s1, s2, 3);
	printf("%d, %d", a, b);
	return 0;
}
*/