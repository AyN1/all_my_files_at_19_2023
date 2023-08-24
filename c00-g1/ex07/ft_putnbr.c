/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:52:50 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/04 12:44:45 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	todo -> handle the INT MIN case
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	minimum_int(int nb)
{
	if (nb != -2147483648)
		return (-1);
	else
	{
		write(1, "-2147483648", 11);
		return (0);
	}
}

int	check_negative(int nb)
{
	if (nb >= 0)
		return (nb);
	else
	{
		nb = nb * -1;
		ft_putchar('-');
		return (nb);
	}
}

void	ft_putnbr(int nb)
{
	char	c;

	if (minimum_int(nb) == 0)
		return ;
	nb = check_negative(nb);
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	c = nb % 10 + 48;
	ft_putchar(c);
}
