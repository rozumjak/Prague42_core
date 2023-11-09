/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:31:48 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 16:41:44 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>

#include <bsd/string.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int	main(void)
{
	char	str[] = "Hoddmbr";
	char	cpy1[] = "xxxxxxxx";
	char	cpy[] = "xxxxxxxx";
	int	i;
	int	size = 9;

	i = strlcat(cpy, str, size);
	printf("%s\n%i\n", cpy, i);
	i = ft_strlcat(cpy1, str, size);
	printf("%s\n%i\n", cpy1, i);

	return (0);
}
*/

/* ft_strlcat() function appends the NUL-terminated string "src" 
 * to the end of "dest". It will append at most 
 * "size" - strlen(dst) - 1 bytes, NUL-terminating the result.
 * The function returns initial length of "dest" plus the length of "src".
 */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	cat;

	i = 0;
	cat = 0;
	while (*dest != '\0' && i < size)
	{
		dest++;
		i++;
	}
	cat = ft_strlcpy(dest, src, size - i);
	return (cat + i);
}
