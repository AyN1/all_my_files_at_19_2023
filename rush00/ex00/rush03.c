/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:08:23 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/06 15:30:22 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	ligne;
	int	colonne;

	ligne = 1;
	if (x < 1 || y < 1)
		return ;
	while (ligne <= y)
	{
		colonne = 1;
		while (colonne <= x)
		{
			if ((ligne == 1 || ligne == y) && colonne == 1)
				ft_putchar('A');
			else if ((ligne == 1 || ligne == y) && colonne == x)
				ft_putchar('C');
			else if (colonne == 1 || colonne == x || ligne == 1 || ligne == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			colonne++;
		}
		ligne++;
		ft_putchar('\n');
	}
}
