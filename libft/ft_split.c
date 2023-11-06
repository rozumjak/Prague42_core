/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:27:57 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/03 15:35:30 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c);

/*
#include <stdio.h>

char	**ft_split(char const *s, char c);

int	main()
{
	char const	s[] = "CHowCYouCDoingC?C";
	char	c = 'C';
	char	**res;
	int	i = 0;

	res = ft_split(s, c);
	while (res[i])
	{
		printf("%s\n", res[i]);
			i++;
	}
	return (0);
}
*/

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		word_length;
	int		i;

	i = 0;
	res = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!res || !s)
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c && *s)
			s++;
		if (*s != '\0')
		{
			if (!ft_strchr(s, c))
				word_length = ft_strlen(s);
			else
				word_length = ft_strchr(s, c) - s;
			res[i] = ft_substr(s, 0, word_length);
			i++;
			s += word_length;
		}
	}
	res[i] = NULL;
	return (res);
}

static size_t	word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (count);
}
