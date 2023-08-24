/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 04:50:03 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/21 06:14:14 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 69;
	ft_putchar('Z');
	ft_putchar('\n');
	ft_putstr("Hello World !\n");
	printf("[%d] [%d]\n", a, b);
	ft_swap(&a, &b);
	printf("[%d] [%d]\n", a, b);
	printf("strlen(%d)\n", ft_strlen("Hello"));
	printf("strcmp(%d)\n", ft_strcmp("7", "3"));
	return (0);
}
