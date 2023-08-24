/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 00:32:34 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/22 00:22:37 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_stock_str
{
	int				size;
	char			*str;
	char			*copy;
}					t_stock_str;

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		++i;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

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
		return (NULL);
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

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int			i;
	int			max;
	char		**str;
	t_stock_str	*ret;
	int			size;

	i = 0;
	max = 5;
	size = atoi(argv[1]);
	str = (char **)malloc(sizeof(char *) * (max + 1));
	str[0] = ft_strdup("Hello");
	str[1] = ft_strdup("Hello1");
	str[2] = ft_strdup("Hello2");
	str[3] = ft_strdup("Hello3");
	ret = ft_strs_to_tab(size, str);
	while (ret && ret[i].str)
	{
		printf("len(%d) ", ret[i].size);
		printf("str(%s) ", ret[i].str);
		printf("copy(%s)\n", ret[i].copy);
		++i;
	}
}

/*
	Loop until reaching ac
	Allocate sufficient memory for *str and for the copy. with ft_strdup
	stock in the structure[0] the strings [0]
	increment the index.
*/
