/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamichal <mamichal@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:53:31 by mamichal          #+#    #+#             */
/*   Updated: 2024/03/05 14:02:20 by mamichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

/*
 * @brief Delate the node from the list
 *
 * Takes as a parameter a node and frees the memory of
 * the node’s content using the function ’del’ given
 * as a parameter and free the node. The memory of
 * ’next’ must not be freed
 *
 * @param lst The node to free
 * @param del address of the function deleting the conten
 * @return Void
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (NULL == lst || NULL == del)
		return ;
	del(lst->content);
	free(lst);
}

/*
!!!main does not work!!!
#include <stdio.h>
static	void del(void *content)
{
	free(content);

}

int main(void)
{
	t_list	*node1 = ft_lstnew("123");
	if (NULL == node1)
	{
		return (1);
	}
	printf("%s, %p", (char *)node1->content, node1);
	ft_lstdelone(node1, &(del(node1->content)));
	printf("%s, %p", (char *)node1->content, node1);
	return EXIT_SUCCESS;
}
*/
