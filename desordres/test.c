#include <stdio.h>

int main(void)
{
	unsigned int nbr=32;
	int	nbr2 = -2147483648;

	printf("%d\n", nbr);
	printf("%d\n", nbr2);
	nbr = -nbr2;
	printf("%d\n", nbr2);
	return (0);
}
