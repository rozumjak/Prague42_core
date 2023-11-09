/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:05:00 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 18:23:04 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Iterates the list "lst" and applies the function 'f' on the content 
 * of each node. Creates a new list resulting of the successive applications 
 * of the function 'f'. The "del" function is used to delete the content 
 * of a node if needed.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*add_new;
	void	*content;

	new_lst = NULL;
	while (lst)
	{
		content = f((*lst).content);
		if (!content)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		add_new = ft_lstnew(content);
		if (!add_new)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, add_new);
		lst = (*lst).next;
	}
	return (new_lst);
}
