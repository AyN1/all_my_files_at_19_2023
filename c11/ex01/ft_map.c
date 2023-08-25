/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 00:06:44 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/25 00:26:02 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret;
	int	i;

	i = 0;
	if (!tab || !f)
		return (NULL);
	ret = malloc(sizeof(int) * length);
	if (!ret)
		return (0);
	while (i < length && tab[i])
	{
		ret[i] = f(tab[i]);
		++i;
	}
	return (ret);
}

/*
#include <stdio.h>


int	isnumber(int n)
{
	if (n > 99)
		return (1);
	else
		return (0);
}
int	main(void)
{
	int	*ret;
	int	i;

	int tab[] = {5, 7, 142, 999, 111, 2};
	ret = ft_map(tab, 1100, isnumber);
	i = 0;
	while (i < 6)
	{
		printf("[%d]", ret[i++]);
	}
}
*/
