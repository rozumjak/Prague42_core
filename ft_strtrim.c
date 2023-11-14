/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:45:27 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 17:36:40 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h> 
#include <stddef.h> 
#include <stdlib.h> 

char	*ft_strtrim(char const *s1, char const *set);


int	main(void)
{
	char const	*s1 = {"cbaHouabc"};
	char const	*set = {"abc"};

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
*/

/*
 * ft_strtrim() allocates (with malloc(3)) and returns a copy of "s1" 
 * with the characters specified in "set" removed from the beginning 
 * and the end of the string.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;

	trim = NULL;
	i = 0;
	j = ft_strlen(s1);
	if (!s1)
		return (trim);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	trim = (char *)malloc(sizeof(char) * (j - i + 1));
	if (trim == NULL)
		return (NULL);
	ft_strlcpy(trim, &s1[i], j - i + 1);
	return (trim);
}
