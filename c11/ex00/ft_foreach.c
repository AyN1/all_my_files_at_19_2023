/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 00:01:53 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/25 03:00:47 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	if (!tab || !f)
		return ;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void	ft_putbr(int s)
{
	char	c;

	if (s > 9)
		ft_putbr(s / 10);
	c = (s % 10) + 48;
	write(1, &c, 1);
}
int	main(void)
{
	int a[3] = {1, 5951, 995};
	ft_foreach(a, 8, ft_putbr);
	return (0);
}
*/
