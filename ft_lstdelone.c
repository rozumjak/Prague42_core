/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:02:45 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 18:10:20 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ft_lstdelone() function takes as a parameter a node of list "lst" 
 * and frees the memory of the node’s content using the function "del" 
 * given as a parameter and free the node. The memory of "next" is not freed.
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del((*lst).content);
	free(lst);
}
