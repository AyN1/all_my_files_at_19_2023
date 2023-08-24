/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 00:32:34 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/22 05:59:51 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		++i;
	return (i);
}

char	*ft_strdup(char *src)
{
	char		*str;
	int			i;


	if (!src)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		++i;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_free(struct s_stock_str *arr, int i)
{
	printf("function to free\n");
	while (i >= 0)
	{
		free(arr[i].copy);
		--i;
	}
	return (NULL);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	i = 0;
	if (!av || !ac)
		return (NULL);
	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
	{
		printf("return NULL");
		return (NULL);
	}
	while (i < ac && av[i])
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		if (!arr[i].copy)
			return (ft_free(arr, i));
		++i;
	}
	arr[i].str = 0;
	return (arr);
}
