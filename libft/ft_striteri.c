/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:20:10 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/02 13:39:34 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	toupperr(unsigned int i, char *c);

#include <stdio.h>

int	main(void)
{
	char	c[] = "hello, world!";
	
	ft_striteri(c, toupperr);
	printf("%s\n", c);
	return (0);
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	toupperr(unsigned int i, char *c)
{
	*c = ((char)ft_toupper((int) *c));
}
*/
