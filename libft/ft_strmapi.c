/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:20:10 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 16:52:06 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	toupperr(unsigned int i, char c);

#include <stdio.h>

int	main(void)
{
	char const	c[] = "hello, world!";

	printf("%s: %s", c, ft_strmapi(c, toupperr));
	return (0);
}
*/

/*
 * ft_strmapi() applies the function 'f' to each character 
 * of the string 's', and passing its index as first argument 
 * to create a new string (with malloc(3)), resulting from 
 * successive applications of 'f'.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	i = 0;
	res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (res == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
char	toupperr(unsigned int i, char c)
{
	return ((char)ft_toupper((int) c));
}
*/
