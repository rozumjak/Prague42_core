/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:45:27 by jrozumek          #+#    #+#             */
/*   Updated: 2023/09/26 12:10:37 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <stddef.h> 
#include <stdlib.h> 

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_array_size(int size, char **strs);
int		ft_str_size(char *str);
char	*ft_concatenate(int size, char **strs, char *sep, char *concat);
/*
int	main(void)
{
	char	*strs[] = {"Hi", "there", "How", "do", "you", "do", "?"};
	char	*sep = ",/";

	printf("%s\n", ft_strjoin(0, strs, sep));
	return (0);
}
*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	int		array_s;
	int		str_s;

	concat = NULL;
	concat = (char *)malloc(sizeof(char) * 1);
	concat[0] = '\0';
	if (size == 0)
		return (concat);
	array_s = ft_array_size(size, strs);
	str_s = ft_str_size (sep);
	concat = (char *)malloc(sizeof(char) * (array_s + (size - 1) * str_s + 1));
	return (ft_concatenate(size, strs, sep, concat));
}

int	ft_array_size(int size, char **strs)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

int	ft_str_size(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_concatenate(int size, char **strs, char *sep, char *concat)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			concat[count++] = strs[i][j++];
		if (i == size - 1)
		{
			concat[count] = '\0';
			break ;
		}
		j = 0;
		while (sep[j] != '\0')
			concat[count++] = sep[j++];
		i++;
	}
	return (concat);
}
