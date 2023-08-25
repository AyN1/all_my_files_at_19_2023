/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 01:52:40 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/25 02:59:59 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_check_error(int n2, char sign)
{
	if (n2 == 0 && sign == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	else if (n2 == 0 && sign == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	else
		return (0);
}

int	ft_doop(int n1, int n2, char sign)
{
	if (sign == '+')
		return (n1 + n2);
	else if (sign == '-')
		return (n1 - n2);
	else if (sign == '*')
		return (n1 * n2);
	else if (sign == '/')
		return (n1 / n2);
	else if (sign == '%')
		return (n1 % n2);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	res;

	res = 0;
	if (argc != 4)
		return (0);
	else if (ft_check_error(ft_atoi(argv[3]), argv[2][0]) == 1)
		return (0);
	else
	{
		res = ft_doop(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0]);
		ft_putnbr(res);
		ft_putstr("\n");
		return (0);
	}
	return (0);
}
