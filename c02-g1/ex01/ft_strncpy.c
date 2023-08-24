/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:33:03 by abicer            #+#    #+#             */
/*   Updated: 2023/08/09 12:58:38 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[] = "FFFFFFFFFFFFFFFFFFFFFFFF";
	printf("%s\n", dest);
	strlcpy(dest, "Hello", 9);
	printf("%s\n", dest);
}
