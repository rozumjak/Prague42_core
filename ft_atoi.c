/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:39:59 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 13:52:40 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(void)
{
	char	*c = "\t\r\f\n\v -1234ab567";

	printf("%d\n", ft_atoi(c));
	printf("%d\n", atoi(c));
	return (0);
}
*/

/* 
 * ft_atoi() function converts the initial portion of
 * the string pointed to by "str" to int.
 */

static int	ft_isspace(const char c);

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + sign * (str[i] - '0');
		i++;
	}
	return (result);
}

// ft_isspace() function checks whether the given 'c' is whitspace.

static int	ft_isspace(const char c)
{
	if (c == ' ' || c == '\r' || c == '\f'
		|| c == '\v' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}
