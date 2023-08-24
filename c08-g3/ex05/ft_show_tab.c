/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 01:07:58 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/21 02:16:13 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

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

void	ft_putendl(char *str)
{
	if (!str)
		return ;
	else
	{
		write(1, str, ft_strlen(str));
		write(1, "\n", 1);
	}
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putendl(par[i].str);
		ft_putnbr(par[i].size);
		ft_putendl("");
		ft_putendl(par[i].copy);
		++i;
	}
}
