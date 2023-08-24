/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 22:32:31 by atbicer           #+#    #+#             */
/*   Updated: 2023/08/13 19:35:12 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>

int		error_management(char *str, int *arr);
int		ft_atoi(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);

/* functions */
int		ft_strlen(char *str);
int		ft_isspace(char c);
int		ft_isdigit(char c);
void	ft_putchar(char c);
int		check_zero_char(char *str);
void	ft_putstr(char *str);
int		ft_contains_alpha(char *str);

/* initialize */
void	initialize_to_zero(int tab[4][4]);
void	initialize_to_zero_arr_clues(int tab[16]);

/* assign */
void	assign_clues_to_arr(char *str, int *arr);

/* print */
void	print_clues_arr(int tab[16]);
void	print_bi_arr(int tab[4][4]);



#endif
