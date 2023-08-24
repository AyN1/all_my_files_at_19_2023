/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:27:51 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/12 23:18:54 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	prepare_display_value(int nb)
{
	unsigned int	nbr;

	nbr = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = (unsigned int) -nb;
	}
	else if (!nb)
		write(1, "0", 1);
	else
		nbr = nb;
	return (nbr);
}

long	reverse_nb(unsigned int nb,	int *count)
{
	char	c;
	long	reversed;

	reversed = 0;
	*count = 0;
	while (nb != 0)
	{
		c = nb % 10;
		reversed = reversed * 10 + c;
		nb /= 10;
		(*count)++;
	}
	return (reversed);
}

void	ft_putnbr(int nb)
{
	unsigned char	c;
	unsigned int	u_nb;
	long			reversed;
	int				count;

	u_nb = prepare_display_value(nb);
	reversed = reverse_nb(u_nb, &count);
	while (reversed != 0)
	{
		c = reversed % 10 + '0';
		write(1, &c, 1);
		u_nb = u_nb * 10 + c;
		reversed /= 10;
		count--;
	}
	while (count-- > 0)
		write(1, "0", 1);
}
