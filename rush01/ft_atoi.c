/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:46:12 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/12 22:33:46 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_isspace(char c);

int	check_minus(int *count, char *str)
{
	int	minus_count;

	minus_count = 0;
	while (str[*count] == '-' || str[*count] == '+' && str[*count])
	{
		if (str[*count] == '-')
			minus_count++;
		(*count)++;
	}
	return (minus_count % 2);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	is_neg;

	i = 0;
	nb = 0;
	is_neg = 0;
	while (ft_isspace(str[i]))
		++i;
	if (check_minus(&i, str) == 1)
		is_neg = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		++i;
	}
	if (is_neg)
		return (-nb);
	else
		return (nb);
}
