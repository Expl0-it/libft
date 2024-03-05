/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamichal <mamichal@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:53:31 by mamichal          #+#    #+#             */
/*   Updated: 2024/03/04 12:15:51 by mamichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
 * @brief Count the length of the list 
 *
 * Counts the number of nodes in a list.
 *
 * @param lst The beginning of the list 
 * @return Length of the list
*/
int	ft_lstsize(t_list *lst)
{
	int	length;

	if (NULL == lst)
		return (0);
	length = 1;
	while (NULL != lst->next)
	{
		lst = lst->next;
		length++;
	}
	return (length);
}

/*
#include <stdio.h>
int main(void)
{
	t_list	*node = ft_lstnew("abc");
	if (NULL == node)
	{
		return (1);
	}
	printf("%s", (char *)node->content);
	return EXIT_SUCCESS;
}
*/
