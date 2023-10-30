/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:45:27 by jrozumek          #+#    #+#             */
/*   Updated: 2023/10/30 14:32:08 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h> 
#include <stddef.h> 
#include <stdlib.h> 

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char const	*s1 = {"Helo, world. How You Doing?"};
	unsigned int	index = 7;
	size_t		len = 5;
	printf("%s\n", ft_substr(s1, index, len));
	return (0);
}
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = NULL;
	i = 0;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
