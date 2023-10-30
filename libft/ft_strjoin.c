/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:45:27 by jrozumek          #+#    #+#             */
/*   Updated: 2023/10/30 14:13:19 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h> 
#include <stddef.h> 
#include <stdlib.h> 

char	*ft_strjoin(char const *s1, char const *s2);


int	main(void)
{
	char const	*s1 = {"Hou"};
	char const	*s2 = {"Hilou"};

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	int		i;
	int		j;

	concat = NULL;
	i = 0;
	j = 0;
	concat = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (concat == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}
