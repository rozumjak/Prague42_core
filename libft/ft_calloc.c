/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:14:10 by jrozumek          #+#    #+#             */
/*   Updated: 2023/10/25 19:11:52 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size);

int	main(void)
{
	char	*call;

	call = ft_calloc(2, 5);
	printf("%s\n", call);
	return (0);
}
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (nmemb > SIZE_MAX / size)
		return (NULL);
	res = (char *)malloc(sizeof(char) * size * nmemb);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, size * nmemb);
	return (res);
}
