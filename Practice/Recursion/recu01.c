/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recu01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:25:35 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/13 15:27:35 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	fun(int n)
{
	if (n == 0)
		return 1;
	else
		return (7 + fun(n - 2));
}

int	main()
{
	printf("%d", fun(4));
	return (0);
}
