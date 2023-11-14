/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:03:15 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 18:09:15 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ft_lstclear() function deletes and frees the given node 
 * of list "lst" and every successor of that node, 
 * using the function "del" and free(3).
 * Finally, the pointer to the list is set to NULL.
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node_before;

	if (!lst)
		return ;
	while (*lst)
	{
		node_before = *lst;
		*lst = (**lst).next;
		ft_lstdelone(node_before, del);
	}
	*lst = NULL;
}
