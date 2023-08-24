/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:45:12 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/07 17:22:17 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		else
			return (1);
	}
	return (1);
}
