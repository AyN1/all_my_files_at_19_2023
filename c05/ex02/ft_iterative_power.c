/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:27:41 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/14 18:00:42 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nb2;

	nb2 = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			nb = nb * nb2;
			--power;
		}
	}
	return (nb);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}
