/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:14:10 by jrozumek          #+#    #+#             */
/*   Updated: 2023/10/24 15:56:04 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *src);


int	main(void)
{
	char	*src = "How you doing";
	char	*z;

	z = strdup(src);
	printf("%s\n", z);
	z = ft_strdup(src);
	printf("%s\n", z);
}
*/

char	*ft_strdup(const char *src)
{
	char	*res;
	size_t	size;

	size = ft_strlen(src);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, src, size + 1);
	return (res);
}
