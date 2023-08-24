#include <stdio.h>
#include <stdlib.h>

int		ft_count_word(char *str, char *charset);
char	**ft_split(char *str, char *charset);

void	ft_test(char *str, char *charset)
{
	char	**ret;
	int		i;
	static int count = 1;

	ret = ft_split(str, charset);
	i = 0;
	printf("Test %d:\n", count);
	printf("wordcount: %d\n", ft_count_word(str, charset));
	printf("str: [%s] charset: [%s]\n", str, charset);
	printf("ft_split: ");
	while (ret[i])
		printf("[%s] ", ret[i++]);
	if (!ret[i])
		printf("[%s] ", ret[0]);
	free(ret);
	printf("\n-------------------------------\n\n");
	count++;
}

int	main(void)
{
	ft_test("Hello-World+This-+Is+A-Test", "+-");
	/* Test 2*/
	ft_test("test", "tes");
	// Test 3: String with spaces as delimiters
	ft_test("Hello World This Is A Test", " ");
	// Test 4: Empty string
	ft_test("", "+-");
	// Test 5: String with multiple character delimiters
	ft_test("Hello***World**This*Is*A*Test", "*");
	// Test 6: String with multiple different delimiters
	ft_test("Hello,World,This,Is,A,Test", ",;");
	// Test 7: Extended charsets with multiple characters
	ft_test("Hello+-*World+This-Is*A-Test*-", "+-*");
	// Test 8: Chars in charset present in between words
	ft_test("Hello+-*World+++Hello-World*This*Is*A-Test*-", "+-*");
	// Test 9: String with multiple repeating delimiters
	ft_test("Hello,,,World;This;;Is,A,;Test", ",;");
	// Test 10: Extended charset with different characters
	ft_test("Hello@World#This$Is%Test", "@#$%");
	// Test 11: Using numbers as delimiters
	ft_test("Hello1World2This3Is4A5Test", "12345");
	// Test 12: Mixed charsets
	ft_test("Hello@World#This$Is%Test1A2B3C", "@#$%123");
	// Test 14: String without delimiters
	ft_test("HelloWorldThisIsATest", "+-");
}
