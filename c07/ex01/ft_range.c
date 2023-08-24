/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 06:45:22 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/16 07:16:23 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	tab = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		++i;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	*tab;
	int	i;

	(void)argc;
	tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	i = 0;
	while (i < atoi(argv[2]) - atoi(argv[1]))
	{
		printf("[%d]\n", tab[i]);
		++i;
	}
	return (0);
}
*/
