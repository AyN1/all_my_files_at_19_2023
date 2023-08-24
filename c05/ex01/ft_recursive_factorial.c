/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 04:40:53 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/14 19:00:08 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else if (nb < 3)
		return (nb);
	else
		return(nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	printf("%d", ft_recursive_factorial(atoi(argv[1])));
}
