/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:45:27 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 17:37:46 by jrozumek         ###   ########.fr       */
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
	char const	*s1 = {"Hello, world. How You Doing?"};
	unsigned int	index = 100;
	size_t		len = 1;
	printf("%s\n", ft_substr(s1, index, len));
	return (0);
}
*/

/*
 * ft_substr() allocates and returns a substring from the string 's'. 
 * The substring begins at index "start" and is of maximum size "len".
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	sub = NULL;
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	else if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			sub[j++] = s[i];
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
