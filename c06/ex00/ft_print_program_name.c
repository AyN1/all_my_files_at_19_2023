/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:52:31 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/15 12:24:40 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	else
		write(1, str, ft_strlen(str));
}

int	main(int argc, char *argv[])
{
	if (!argc)
		return (-1);
	ft_putstr(argv[0]);
	ft_putstr("\n");
	return (0);
}
