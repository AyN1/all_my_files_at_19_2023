/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:11:48 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/09 13:43:55 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int	size;
	unsigned int	ret;

	char	dest0a[50] = "0123456789";
	char	dest0b[50] = "0123456789";
	size = 	0;

	ret = strlcat(dest0a, "Hello", size);
	printf("[%d]:", ret);
	printf("[%s]\n", dest0a);

	ret = ft_strlcat(dest0b, "Hello", size);
	printf("[%d]:", ret);
	printf("[%s]\n\n", dest0b);
/*		End of Test		*/

	char	dest1a[50] = "0123456789";
	char	dest1b[50] = "0123456789";
	size = 	8;

	ret = strlcat(dest1a, "Hello", size);
	printf("[%d]:", ret);
	printf("[%s]\n", dest1a);

	ret = ft_strlcat(dest1b, "Hello", size);
	printf("[%d]:", ret);
	printf("[%s]\n\n", dest1b);
/*		End of Test		*/

	char	dest2a[50] = "0123456789";
	char	dest2b[50] = "0123456789";
	size = 	9;

	ret = strlcat(dest2a, "Hello", size);
	printf("[%d]:", ret);
	printf("[%s]\n", dest2a);

	ret = ft_strlcat(dest2b, "Hello", size);
	printf("[%d]:", ret);
	printf("[%s]\n\n", dest2b);
/*		End of Test		*/

	char	dest3a[50] = "0123456789";
	char	dest3b[50] = "0123456789";
	size = 	10;

	ret = strlcat(dest3a, "Hello", size);
	printf("[%d]:", ret);
	printf("[%s]\n", dest3a);

	ret = ft_strlcat(dest3b, "Hello", size);
	printf("[%d]:", ret);
	printf("[%s]\n\n", dest3b);
/*		End of Test		*/

	char	dest4a[50] = "0123456789";
	char	dest4b[50] = "0123456789";
	size = 	11;

	ret = strlcat(dest4a, "Hello", size);
	printf("[%d]:", ret);
	printf("[%s]\n", dest4a);

	ret = ft_strlcat(dest4b, "Hello", size);
	printf("[%d]:", ret);
	printf("[%s]\n\n", dest4b);
/*		End of Test		*/

	char	dest5a[50] = "0123456789";
	char	dest5b[50] = "0123456789";
	size = 	18;

	ret = strlcat(dest5a, "Hello", size);
	printf("[%d]:", ret);
	printf("[%s]\n", dest5a);

	ret = ft_strlcat(dest5b, "Hello", size);
	printf("[%d]:", ret);
	printf("[%s]\n\n", dest5b);
/*		End of Test		*/


	return (0);
}
