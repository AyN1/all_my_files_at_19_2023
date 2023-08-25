/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 00:41:38 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/25 03:00:25 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!tab || !f)
		return (0);
	while (i < length && tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		++i;
	}
	return (count);
}
/*
#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] < 65)
			return (0);
		else if (str[i] >= 91 && str[i] <= 96)
			return (0);
		else if (str[i] > 122)
			return (0);
		++i;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int	ret;
	int	i;

	char *tab[] = {"hello", "W4z", "test", "1", " ", "]", 0};
	char *tab2[] = {"1h2", "---", "012", "1", "-", "]", 0};
	ret = ft_count_if(tab, 588, ft_str_is_alpha);
	i = 0;
	printf("[%d]", ret);
}
*/
