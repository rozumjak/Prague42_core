/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:04:04 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 18:08:09 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Iterates the list "lst" and applies the function 'f' 
 * on the content of each node.
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*anvil;

	if (!f || !lst)
		return ;
	anvil = lst;
	while (anvil)
	{
		f((*anvil).content);
		anvil = (*anvil).next;
	}
}
