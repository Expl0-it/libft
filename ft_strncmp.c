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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] && (s1[i] == s2[i]) && (i < n))
	{
		i++;
	}
	if (i == n)
	{
		i--;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20] = "aba";
	char s2[20] = "zxz";
	int a = ft_strncmp(s1, s2, 2);
	int b = strncmp(s1, s2, 2);
	printf("%d, %d", a, b);
	return 0;
}
*/