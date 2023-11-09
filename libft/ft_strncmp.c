/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:19:53 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 16:57:09 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	char	*s1 = "\200";
	char	*s2 = "\0";
	int	n = 6;

	printf("ft_strncmp: %i\n", ft_strncmp(s1, s2, n));
	printf("strncmp: %i\n", strncmp(s1, s2, n));
}
*/

/*
 * ft_strncmp() function returns an integer indicating the result 
 * of comparison of the first (at most) 'n' bytes of "s1" and "s2", as follows:
       • 0, if the s1 and s2 are equal;
       • a negative value if s1 is less than s2;
       • a positive value if s1 is greater than s2.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
