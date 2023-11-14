/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:37:28 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 15:12:34 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include<stdio.h>
#include<string.h>

void *ft_memchr(const void *s, int c, size_t n);

int main(void)
{
	char c[30] = "hiiiiiiiiAhoj";
	int	i = 'A';
	size_t	n = 8;
	char *r;

	r = memchr(c, i, n);
	printf("origin: %s\n", r);
	r = ft_memchr(c, i, n);
	printf("new: %s\n", r);
	return (0);
}
*/

/*
 * ft_memchr() function scans the initial 'n' bytes of the memory 
 * area pointed to by 's' for the first instance of 'c'.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)p[i] == (unsigned char)c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
