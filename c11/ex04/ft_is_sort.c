/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 01:15:20 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/25 02:38:22 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	if (!tab || !f)
		return (1);
	while ((i + 1) < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		++i;
	}
	return (1);
}
/*
int	test(int n1, int n2)
{
	if (n1 - n2 == 0)
		return (0);
	else if (n1 < n2)
		return (n1 - n2);
	else
		return (n1 - n2);
}

#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	arg1;
	int	arg2;
	int	ret1;
	int	ret2;

	int tab[10] = {0, 6, 2, 3, 4, 5, 9, 9, 9, 9};
	// arg1 = atoi(argv[1]);
	// arg2 = atoi(argv[2]);
	// ret1 = test(arg1, arg2);
	ret2 = ft_is_sort(tab, 90000, test);
	printf("%d\n", ret2);
}
*/
