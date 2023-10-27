/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:19:53 by jrozumek          #+#    #+#             */
/*   Updated: 2023/10/25 19:09:25 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int	main(void)
{
	char	str [] = "aaabcabcd";
	char	to_find [] = "cd";
	int	len = 8;

	printf("ft_strnstr: %s\n", ft_strnstr(str, to_find, len));
	printf("strnstr: %s\n", strnstr(str, to_find, len));
}
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	if (little[0] == '\0' || little == NULL)
		return ((char *)big);
	while (big[j] != '\0' && j < len)
	{
		i = 0;
		while (big[j + i] == little[i] && (j + i) < len)
		{
			if (little[i + 1] == '\0')
				return ((char *)big + j);
			i++;
		}
		j++;
	}
	return (NULL);
}
