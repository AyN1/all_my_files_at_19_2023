/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 06:15:55 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/24 17:37:25 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_charset(char c, char *charset)
{
	int	i;

	if (!charset)
		return (0);
	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		++i;
	}
	return (0);
}

char	*ft_strsplitdup(char *src, char *charset)
{
	char	*str;
	int		i;

	if (!src || !charset)
		return (NULL);
	i = 0;
	while (src[i] && ft_check_charset(src[i], charset) == 0)
		++i;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (src[i] && ft_check_charset(src[i], charset) == 0)
	{
		str[i] = src[i];
		++i;
	}
	str[i] = '\0';
	return (str);
}

int	ft_count_word(char *str, char *charset)
{
	int	count_word;
	int	i;

	if (!str || !charset)
		return (0);
	count_word = 0;
	i = 0;
	while (str[i])
	{
		if (ft_check_charset(str[i], charset) == 0)
			count_word++;
		while (ft_check_charset(str[i], charset) == 0 && str[i])
			++i;
		if (str[i])
			++i;
	}
	return (count_word);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		n;

	if (!str || !charset)
		return (NULL);
	split = malloc(sizeof(char *) * (ft_count_word(str, charset) + 1));
	if (!split)
		return (NULL);
	i = 0;
	n = 0;
	while (str[i] && n < ft_count_word(str, charset))
	{
		while (ft_check_charset(str[i], charset) == 1)
			++i;
		split[n] = ft_strsplitdup(str + i, charset);
		if (!split[n])
			return (NULL);
		while (ft_check_charset(str[i], charset) == 0 && str[i])
			++i;
		++n;
	}
	split[n] = NULL;
	return (split);
}

/* Thinking process

str =	"Hello-World+This-+Is+A-Test"
charset = "-+"

return =
			[Hello]
			[World]
			[This]
			[Is]
			[A]
			[Test]
*/
