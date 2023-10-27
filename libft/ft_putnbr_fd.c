/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:51:59 by jrozumek          #+#    #+#             */
/*   Updated: 2023/09/17 21:51:07 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	printnbr(int nb);
void	ft_putchar(int nb);
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb > -2147483648)
	{
		write(1, "-", 1);
		nb = -nb;
		printnbr(nb);
	}
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else
		printnbr(nb);
}

void	printnbr(int nb)
{
	if (nb < 10)
	{
		ft_putchar(nb);
	}
	else
	{
		printnbr(nb / 10);
		ft_putchar(nb % 10);
	}
}

void	ft_putchar(int nb)
{
	char	c;

	c = nb + 48;
	write(1, &c, 1);
}
