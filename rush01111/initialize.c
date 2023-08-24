/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 21:54:22 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/12 22:33:23 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	initialize_to_zero(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		j = 0;
		++i;
	}
}

void	initialize_to_zero_arr_clues(int tab[16])
{
	int	i;

	i = 0;
	while (i <= 16)
	{
		tab[i] = 0;
		++i;
	}
}
