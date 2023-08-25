/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:20:19 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/12 23:24:49 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == '\t')
		return (1);
	else if (c == '\v')
		return (1);
	else if (c == '\n')
		return (1);
	else if (c == '\r')
		return (1);
	else if (c == '\f')
		return (1);
	else if (c == ' ')
		return (1);
	else
		return (0);
}

int	check_minus(int *count, char *str)
{
	int	minus_count;

	minus_count = 0;
	while ((str[*count] == '-' || str[*count] == '+') && str[*count])
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
