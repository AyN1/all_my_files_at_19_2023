/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 04:28:59 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/14 15:11:46 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (!nb)
		return (1);
	if (nb < 0)
		return (0);
	while (i > 0)
	{
		nb = nb * i;
		--i;
	}
	return (nb);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main (int argc, char *argv[])
{
	printf("%d", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
