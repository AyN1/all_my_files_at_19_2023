#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

int	main(int argc, char **argv)
{
	t_stock_str	*t_ret;

	char *av[] = {"Hello", "World", "POUIC", "Pouette", "Lorem", "Ipsum",
		"Dolor", "Sit", "Amet", "Consectetur", "Adipiscing", "Elit", "Sed",
		"Do", "Eiusmod", "Tempor", "Incididunt", NULL};
	t_ret = ft_strs_to_tab(-5, av);
	ft_show_tab(t_ret);
	return (0);
}
