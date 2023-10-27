/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:19:53 by jrozumek          #+#    #+#             */
/*   Updated: 2023/09/20 21:11:04 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str [] = "ABCDEFEND nebo nic";
	char	to_find [] = "nebo";

	printf("ft_strstr: %s\n", ft_strstr(str, to_find));
	printf("strstr: %s\n", strstr(str, to_find));
}
*/

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	j;
	unsigned int	i;

	j = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[j] != '\0')
	{
		i = 0;
		while (str[j + i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
				return (str + j);
			i++;
		}
		j++;
	}
	return (0);
}
