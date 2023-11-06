/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:03:15 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/06 15:45:17 by jrozumek         ###   ########.fr       */
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
		*lst = (**lst).next;
		ft_lstdelone(node_before, del);
	}
	*lst = NULL;
}
