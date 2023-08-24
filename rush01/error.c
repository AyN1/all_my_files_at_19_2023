/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 22:15:32 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/13 19:34:54 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	error_management(char *str, int *arr)
{
	int	i;

	i = 0;
	assign_clues_to_arr(str, arr);
	if (ft_contains_alpha(str) || ft_strlen(str) != 31)
	{
		write(1, "Format Error\n", 14);
		return (1);
	}
	while (arr[i] || !arr[0])
	{
		if (check_zero_char(str) || arr[i] > 4)
		{
			write(1, "Error: Digit must be between 1 and 4.\n", 39);
			return (2);
		}
		++i;
	}
	return (0);
}
