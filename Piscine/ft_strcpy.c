/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:10:44 by jrozumek          #+#    #+#             */
/*   Updated: 2023/09/14 12:36:39 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char str[] = "Hombre";
	char str1[] = "Cheers!";
	char cpy[10];

	strcpy(cpy, str);
	write(1, cpy, 9);	
	write(1, "\n", 1);	
	ft_strcpy(cpy, str1);
	write(1, cpy, 9);	
	write(1, "\n", 1);	
	return (0);
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	strlen;

	i = 0;
	strlen = 0;
	while (*(src + strlen) != '\0')
	{
		strlen++;
	}
	while (i <= strlen)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
