/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:56:17 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/03 14:55:03 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_nbr_size(int nb);

/*
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n);

int	main(void)
{
	printf("itoa: %s\n", ft_itoa(254));
	return (0);
}
*/

char	*ft_itoa(int n)
{
	char	*a;
	int		size;

	size = ft_nbr_size(n);
	a = NULL;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	a = (char *)malloc(sizeof(char) * size + 1);
	if (a == NULL)
		return (NULL);
	a[size] = '\0';
	if (n == 0)
		a[0] = '0';
	if (n < 0)
	{
		a[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		size--;
		a[size] = (n % 10) + '0';
		n /= 10;
	}
	return (a);
}

static unsigned int	ft_nbr_size(int nb)
{
	unsigned int	size;

	size = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		size += 1;
	while (nb != 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}
