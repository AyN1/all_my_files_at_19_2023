/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:10:06 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/02 19:29:25 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printchars(char a, char b, char i, char j)
{
	ft_putchar(' ');
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(i);
	ft_putchar(j);
}

void	ft_print_combinations(char a, char b)
{
	char	i;
	char	j;

	i = '0';
	j = '0';
	while (i <= '9')
	{
		while (j <= '9')
		{
			if (a < i || (a == i && b < j))
			{
				ft_printchars(a, b, i, j);
				if (!(a == '9' && b == '8' && i == '9' && j == '9'))
					write(1, ", ", 2);
			}
			j++;
		}
		j = '0';
		i++;
	}
	i = '0';
	b++;
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			ft_print_combinations(a, b);
			b++;
		}
		b = '0';
		a++;
	}
	ft_putchar('\n');
}
