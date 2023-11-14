/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:19:27 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 15:39:43 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <unistd.h>


void	ft_putstr_fd(char *s, int fd);

int	main(void)
{
	char	*s = "Ahoj";
	ft_putstr_fd(s, 1);
	ft_putchar_fd('\n', 1);
	return 0;
}	
*/

// ft_putstr_fd() outputs the string 's' to the given file descriptor "fd".

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
