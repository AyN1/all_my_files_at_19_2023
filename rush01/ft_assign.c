/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 21:49:39 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/13 20:13:26 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	assign_clues_to_arr(char *str, int *arr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	initialize_to_zero_arr_clues(arr);
	while (str[i])
	{
		if (ft_isdigit(str[i]))
		{
			arr[j] = ft_atoi(str + i);
			j++;
		}
		i++;
	}
}
