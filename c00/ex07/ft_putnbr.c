/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:52:50 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/03 12:31:16 by atbicer          ###   ########.fr       */
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

long	check_negative(long nb)
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

int	check_zero(long nb)
{
	if (nb != 0)
		return (0);
	else
	{
		ft_putchar('0');
		return (1);
	}
}

int	minimum_int(long nb)
{
	if (nb != -2147483648)
		return (-1);
	else
	{
		write(1, "-2147483648", 11);
		return (0);
	}
}

void	ft_putnbr(int nb)
{
	char	c;
	long	reversed;
	long	digit;

	reversed = 0;
	if (minimum_int(nb) == 0)
		return ;
	if (check_zero(nb))
		return ;
	nb = check_negative(nb);
	while (nb > 0) // 147
	{
		digit = nb % 10;
		reversed = reversed * 10 + digit; //741
		nb = nb / 10;
	}
	while (reversed > 0)
	{
		c = reversed % 10 + '0';
		ft_putchar(c);
		reversed = reversed / 10;
	}
}
