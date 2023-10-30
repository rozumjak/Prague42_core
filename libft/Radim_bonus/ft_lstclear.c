/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rludvik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:17:50 by rludvik           #+#    #+#             */
/*   Updated: 2023/10/27 16:52:27 by rludvik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node_before;

	if (!lst)
		return ;
	while (*lst)
	{
		node_before = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(node_before, del);
	}
	*lst = NULL;
}
