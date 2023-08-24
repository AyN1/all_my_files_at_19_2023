/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 08:50:20 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/21 19:02:28 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		++i;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	if (!src || !dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_allocation(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;
	int		i;

	i = 0;
	total_len = 0;
	result = NULL;
	if (!strs)
		return (0);
	while (strs[i] && i < size)
		total_len = total_len + ft_strlen(strs[i++]);
	total_len = total_len + ft_strlen(sep) * (i - 1);
	result = (char *)malloc(sizeof(char) * total_len + 1);
	if (!result)
		return (NULL);
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	if (!strs || !sep)
		return (NULL);
	if (!size)
		return (result = malloc(1));
	result = ft_allocation(size, strs, sep);
	if (!result)
		return (NULL);
	ft_strcpy(result, strs[0]);
	i = 0;
	while (strs[i + 1] && i < size - 1)
	{
		ft_strcat(result, sep);
		ft_strcat(result, strs[i + 1]);
		++i;
	}
	return (result);
}

#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	**str;
	char	*result;
	int		i;

	str = malloc(sizeof(char *) * 6);
	str[0] = strdup("Hello");
	str[1] = strdup("aaa");
	str[2] = strdup("test");
	str[3] = strdup("Pouic");
	str[4] = strdup("World");
	i = 0;
	while (i < 5)
		printf("[%s]", str[i++]);
	result = ft_strjoin(atoi(argv[1]), str, "---");
	printf("\n\nft_strjoin: %s", result);
	i = 0;
	while (i < 5)
	{
		free(str[i]);
		++i;
	}
	free(str);
	free(result);
	return (0);
}
