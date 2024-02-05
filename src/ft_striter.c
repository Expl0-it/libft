/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamichal <mamichal@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:40:24 by mamichal          #+#    #+#             */
/*   Updated: 2024/02/05 15:54:20 by mamichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(s);
			i++;
		}
	}
}

/*
TODO
#include <stdio.h>
int main(void)
{
	char	*str = "42";
	ft_striter(str, //function);
	return 0;
}
*/
