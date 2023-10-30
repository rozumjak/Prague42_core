/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rludvik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:26:01 by rludvik           #+#    #+#             */
/*   Updated: 2023/10/27 16:55:29 by rludvik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*anvil;

	if (!f || !lst)
		return ;
	anvil = lst;
	while (anvil)
	{
		f(anvil->content);
		anvil = anvil->next;
	}
}
