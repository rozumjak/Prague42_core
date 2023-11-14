/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:02:08 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 17:59:23 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_lstlast() function returns the last node of the linked list "lst".

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && (*lst).next)
		lst = (*lst).next;
	return (lst);
}
