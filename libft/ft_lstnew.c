/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:56:29 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 17:49:49 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstnew() function allocates (with malloc(3)) and returns a new node.
 * The member variable "content" is initialized with
 * the value of the parameter "content". The variable
 * "next" is initialized to NULL.
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*out;

	out = (t_list *)malloc(sizeof(t_list));
	if (!out)
		return (NULL);
	(*out).content = content;
	(*out).next = NULL;
	return (out);
}
