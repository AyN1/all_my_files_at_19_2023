/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:00:56 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/09 16:22:13 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char *c = "Bar Bar Foo";
	char *d = "";

	printf("[%s]:", strstr(c, d));
	printf("[%s]", ft_strstr(c, d));
}
