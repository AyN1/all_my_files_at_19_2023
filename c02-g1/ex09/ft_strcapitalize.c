/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:25:35 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/07 17:22:00 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alpha_numeric(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else if (c >= 'a' && c <= 'z')
		return (0);
	else if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	separator;

	if (!str)
		return (0);
	i = 0;
	separator = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && separator == 1)
			str[i] = str[i] - 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && separator == 0)
			str[i] = str[i] + 32;
		if (alpha_numeric(str[i]) == 1)
			separator = 1;
		else
			separator = 0;
		++i;
	}
	return (str);
}
