/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 07:17:21 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/18 23:01:40 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (!*range)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		++i;
	}
	return (size);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	*tab;
	int	size;
	int	i;
	int	ret;

	(void)argc;
	tab = NULL;
	ret = ft_ultimate_range(&tab, atoi(argv[1]), atoi(argv[2]));
	size = atoi(argv[2]) - atoi(argv[1]);
	i = 0;
	if (!tab)
	{
		printf("!tab\n");
		// return (-1);
	}
	while (ret != -1 && tab[i])
	{
		printf("[%d]\n", tab[i]);
		++i;
	}
	printf("ret(%d)", ret);
}
