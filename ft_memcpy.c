/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:37:28 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 15:23:50 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include<stdio.h>
#include<string.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
	char c[300] = "Hi";
	const char i[300] = "Aloooooha";
	size_t	n = 3;

	memcpy(c, i, n);
	printf("origin: %s\n", c);
	ft_memcpy(c, i, n);
	printf("new: %s\n", c);
	return (0);
}
*/

/*
 * ft_memcpy() function copies 'n' bytes from memory area "src" to 
 * memory area "dest". The memory areas must not overlap.
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
