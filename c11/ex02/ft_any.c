/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 00:27:23 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/25 03:00:35 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	if (!tab || !f)
		return (0);
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		++i;
	}
	return (0);
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
	ret = ft_any(tab2, ft_str_is_alpha);
	i = 0;
	printf("[%d]", ret);
}
*/
