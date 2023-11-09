/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:14:10 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 14:18:36 by jrozumek         ###   ########.fr       */
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

/* 
 * ft_calloc() function allocates memory for an array of "nmemb" 
 * elements of "size" bytes each and returns a pointer to the allocated 
 * memory. The memory is set to zero.
 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	total_size = nmemb * size;
	res = malloc(total_size);
	if (res == NULL)
		return (NULL);
	ft_memset(res, 0, total_size);
	return (res);
}
