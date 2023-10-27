/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:39:16 by jrozumek          #+#    #+#             */
/*   Updated: 2023/10/24 15:40:14 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
/*
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char str[] = "Hombre";
//	char str1[] = "Cheers!";
	char cpy[10];

	strncpy(cpy, str, 3);
//	cpy[4] = '\0';
	printf("%s\n", cpy);
	ft_strncpy(cpy, str, 3);
//	cpy[4] = '\0';
	printf("%s\n", cpy);
	return (0);
}
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
