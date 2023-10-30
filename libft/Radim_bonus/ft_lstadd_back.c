/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rludvik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:05:59 by rludvik           #+#    #+#             */
/*   Updated: 2023/10/27 16:57:20 by rludvik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*anvil;

	if (!new)
		return ;
	anvil = *lst;
	if (!anvil)
	{
		*lst = new;
		return ;
	}
	while (anvil->next)
		anvil = anvil->next;
	anvil->next = new;
}
