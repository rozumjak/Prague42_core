/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:37:28 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 19:16:29 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include<stdio.h>
#include<string.h>

void *ft_memmove(void *dest, const void *src, size_t n);

int main(void)
{
	char c[10] = "Hi";
	const char i[10] = "Aloooooha";
	size_t	n = 10;

	memmove(c, i, n);
	printf("origin: %s\n", c);
	ft_memmove(c, i, n);
	printf("new: %s\n", c);
	return (0);
}
*/

/*
 * ft_memmove() function copies 'n' bytes from memory area "src" to memory 
 * area "dest". The memory areas may overlap.
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = n;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (src < dest)
	{
		while (i > 0)
		{
			i--;
			((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
			i++;
		}
	}
	return (dest);
}
