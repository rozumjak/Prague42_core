/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:19:53 by jrozumek          #+#    #+#             */
/*   Updated: 2023/09/19 21:49:14 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src [] = "ABC";
	char	dest [10] = "DEF";
	char	src1 [] = "ABC";
	char	dest1 [10] = "DEF";
//	int	n = 5;

	printf("ft_strcat: %s\n", ft_strcat(dest, src));
	printf("strcat: %s\n", strcat(dest1, src1));
}
*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
