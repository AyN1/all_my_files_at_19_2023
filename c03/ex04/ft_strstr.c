/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:00:58 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/09 16:22:04 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		++i;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		while (str[i] == to_find[j])
		{
			if (j == ft_strlen(to_find) - 1)
				return (str + i - j);
			++i;
			++j;
		}
		++i;
	}
	return (0);
}
