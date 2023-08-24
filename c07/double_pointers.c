#include <stdio.h>

void	ft_display(char *str)
{
	printf("%s\n", str);
	str = "This is another test";
}

int	main(void)
{
	char	*str;

	str = "This is a test";
	ft_display(str);
	printf("after the call: (%s)", str);
	return (0);
}
