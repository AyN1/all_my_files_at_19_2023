/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 21:51:42 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/12 22:33:13 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	print_clues_arr(int tab[16])
{
	int	i;

	i = 0;
	while (tab[i] && i < 16)
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		i++;
	}
}

void	print_bi_arr(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			ft_putnbr(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		++i;
	}
}
