/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:31:48 by jrozumek          #+#    #+#             */
/*   Updated: 2023/09/20 18:20:06 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

#include <bsd/string.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	str[] = "ABC";
	char	cpy1[7] = "ABCDE";
	int	i;

	i = ft_strlcat(cpy1, str, 9);
	printf("%s\n%i\n", cpy1, i);

	return (0);
}
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	strlen1;
	unsigned int	strlen2;

	i = 0;
	j = 0;
	strlen1 = 0;
	strlen2 = 0;
	while (src[strlen1] != '\0')
		strlen1++;
	while (dest[strlen2] != '\0')
		strlen2++;
	if (size <= strlen2)
		return (strlen1 + size);
	j = strlen2;
	while (j < size - 1 && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (strlen1 + strlen2);
}
