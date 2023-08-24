/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:12:09 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/15 12:26:13 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		++i;
	return (i);
}

void	ft_putstr_endl(char *str)
{
	if (!str)
		return ;
	else
	{
		write(1, str, ft_strlen(str));
		ft_putchar('\n');
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (!argc)
		return (-1);
	i = 0;
	while (argv[++i])
		ft_putstr_endl(argv[i]);
	return (0);
}
