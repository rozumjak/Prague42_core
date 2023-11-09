/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:37:28 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 14:00:55 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_bzero() function erases the data in the 'n' bytes of the memory 
 * starting at the location pointed to by 's', by writing zeros 
 * (bytes containing '\0') to that area.
 */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
