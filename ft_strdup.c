/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:14:10 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 16:16:01 by jrozumek         ###   ########.fr       */
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

/*
 * ft_strdup() function returns a pointer to a new string which 
 * is a duplicate of the string 's'. Memory for the new string 
 * is obtained with malloc(3).
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
