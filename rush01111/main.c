/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:23:34 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/13 20:14:09 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* TO DO
	renomer les variables en anglais
	verifier si on a le droit pour sizeof.
	retirer la macro N
*/

#include <unistd.h>
#include "main.h"

int	main(int argc, char *argv[])
{
	int	arr_sol[4][4];
	int	arr_clues[16];

	if (argc != 2)
	{
		ft_putstr("Error args");
		return (-1);
	}
	if (error_management(argv[1], arr_clues))
		return (-1);
//	print_clues_arr(arr_clues);
	initialize_to_zero(arr_sol);
	print_bi_arr(arr_sol);
}
