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

//returns length of a given string
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