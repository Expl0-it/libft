/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamichal <mamichal@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:53:31 by mamichal          #+#    #+#             */
/*   Updated: 2024/03/05 13:29:45 by mamichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
 * @brief Add node to the end of the list
 *
 * Adds the node ’new’ at the end of the list.
 *
 * @param lst The address of a pointer to the first link
 * @param new The address of a pointer to the node to be added
 * @return Void
*/
void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (NULL == new)
		return ;
	if (NULL == lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
#include <stdio.h>
int main(void)
{
	t_list	*node1 = ft_lstnew("123");
	t_list	*node2 = ft_lstnew("abc");
	if (NULL == node1 || NULL == node2)
	{
		return (1);
	}
	ft_lstadd_front(&node2, node1);
	printf("%p\n", node1->next);
	printf("%p", node2->next);
	return EXIT_SUCCESS;
}
*/
