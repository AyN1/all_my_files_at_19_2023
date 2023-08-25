/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 01:51:28 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/25 02:06:41 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putnbr(int nb)
{
	unsigned int	abs;
	char			c;

	if (nb >= 0)
		abs = nb;
	else
	{
		write(1, "-", 1);
		abs = -nb;
	}
	if (abs > 9)
		ft_putnbr(abs / 10);
	c = abs % 10 + 48;
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		++i;
	return (i);
}

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	else
		write(1, str, ft_strlen(str));
}
