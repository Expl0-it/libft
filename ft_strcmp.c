/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmichali <mmichali@student.42.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:37:03 by mmichali          #+#    #+#             */
/*   Updated: 2023/07/19 13:16:40 by mmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (unsigned char)*s1 == (unsigned char)*s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20] = "abcaqwe";
	char s2[20] = "azcaqwe";
	int a = ft_strcmp(s1, s2);
	int b = strcmp(s1, s2);
	printf("%d, %d", a, b);
	return 0;
}
*/