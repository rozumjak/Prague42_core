/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:51:59 by jrozumek          #+#    #+#             */
/*   Updated: 2023/10/30 10:39:13 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	printnbr(int nb, int fd);

/*
#include <unistd.h>

void	ft_putnbr_fd(int nb, int fd);

int	main(void)
{
	ft_putnbr_fd(0, 1);
	return (0);
}
*/

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0 && nb > -2147483648)
	{
		write(fd, "-", 1);
		nb = -nb;
		printnbr(nb, fd);
	}
	else if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else
		printnbr(nb, fd);
}

static void	printnbr(int nb, int fd)
{
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0', fd);
	}
	else
	{
		printnbr(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
}
