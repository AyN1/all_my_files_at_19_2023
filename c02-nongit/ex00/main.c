#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
	char src1[] = "Hello, World!";
	char dest1[20];
	char dest2[20];

	strcpy(dest1, src1);
	printf("strcpy: %s\n", dest1);

	ft_strcpy(dest2, src1);
	printf("ft_strcpy: %s\n", dest2);

	char src2[] = "OpenAI";
	char dest3[10];
	char dest4[10];

	strcpy(dest3, src2);
	printf("strcpy: %s\n", dest3);

	ft_strcpy(dest4, src2);
	printf("ft_strcpy: %s\n", dest4);

	char src3[] = "Testing";
	char dest5[15];
	char dest6[15];

	strcpy(dest5, src3);
	printf("strcpy: %s\n", dest5);

	ft_strcpy(dest6, src3);
	printf("ft_strcpy: %s\n", dest6);

	char src4[] = "";
	char dest7[5];
	char dest8[5];

	strcpy(dest7, src4);
	printf("strcpy: %s\n", dest7);

	ft_strcpy(dest8, src4);
	printf("ft_strcpy: %s\n", dest8);

	char src5[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char dest9[30];
	char dest10[30];

	strcpy(dest9, src5);
	printf("strcpy: %s\n", dest9);

	ft_strcpy(dest10, src5);
	printf("ft_strcpy: %s\n", dest10);

	char src6[] = "0123456789";
	char dest11[15];
	char dest12[15];

	strcpy(dest11, src6);
	printf("strcpy: %s\n", dest11);

	ft_strcpy(dest12, src6);
	printf("ft_strcpy: %s\n", dest12);

	char *src7 = 0;
	char dest13[15];
	char dest14[15];

	strcpy(dest13, src7);
	printf("strcpy: %s\n", dest13);

	ft_strcpy(dest14, src7);
	printf("ft_strcpy: %s\n", dest14);

	return 0;
}
