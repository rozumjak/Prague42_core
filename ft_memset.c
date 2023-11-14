/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:37:28 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 15:27:36 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include<stdio.h>
#include<string.h>

void *ft_memset(void *s, int c, size_t n);

int main(void)
{
	char c[300] = "hiiiiiii";
	int	i = 'A';
	size_t	n = 300;

	memset(c, i, n);
	printf("origin: %s\n", c);
	ft_memset(c, i, n);
	printf("new: %s\n", c);
	return (0);
}
*/

/*
 * ft_memset() function fills the first 'n' bytes of the memory 
 * area pointed to by 's' with the constant byte 'c'.
 */

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}
