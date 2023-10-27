/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:31:48 by jrozumek          #+#    #+#             */
/*   Updated: 2023/10/25 20:00:24 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>

#include <bsd/string.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int	main(void)
{
	char	str[] = "Hoddmbr";
	char	cpy1[] = "xxxxxxxx";
	char	cpy[] = "xxxxxxxx";
	int	i;
	int	size = 0;

	i = strlcpy(cpy, str, size);
	printf("%s\n%i\n", cpy, i);
	i = ft_strlcpy(cpy1, str, size);
	printf("%s\n%i\n", cpy1, i);

	return (0);
}
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	strlen;

	i = 0;
	strlen = 0;
	while (src[strlen] != '\0')
	{
		strlen++;
	}
	if (size == 0 || dest == NULL)
		return (strlen);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (strlen);
}
