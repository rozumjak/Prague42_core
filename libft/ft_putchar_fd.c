/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:19:27 by jrozumek          #+#    #+#             */
/*   Updated: 2023/10/27 15:32:06 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <unistd.h>


void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	ft_putchar_fd('C', 1);
	ft_putchar_fd('\n', 1);
	return 0;
}	
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
