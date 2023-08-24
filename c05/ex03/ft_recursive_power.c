/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:49:14 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/14 19:24:14 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	else
		return nb * ft_recursive_power(nb, power - 1);
}

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	printf("%d", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
