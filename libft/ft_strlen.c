/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:09:00 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 16:43:58 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>

size_t	ft_strlen(const char *str);

int	main(void)
{
	printf("res1: %zu\n", ft_strlen("123"));
	printf("res2: %zu\n", ft_strlen(""));
	return (0);
}
*/

/*
 * ft_strlen() function calculates the length of the string pointed 
 * to by "str", excluding the terminating null byte ('\0').
 */

size_t	ft_strlen(const char *str)
{
	size_t	strlen;

	strlen = 0;
	while (str[strlen])
		strlen++;
	return (strlen);
}
