#include <stdio.h>

int	ft_check_charset(char c, char *charset);
int	ft_count_word(char *str, char *charset);

int	main(void)
{
	char	*str;
	char	*charset;

	// Test 1: Basic test with multiple delimiters
	str = "-+-+Hello-World+This-+Is+A-Test+-+-";
	charset = "+-";
	printf("Test 1 - Expected wordcount: 6, Actual wordcount: %d\n",
		ft_count_word(str, charset));
	// Test 2: String without delimiters
	str = "HelloWorldThisIsATest";
	charset = "+-";
	printf("Test 2 - Expected wordcount: 1, Actual wordcount: %d\n",
		ft_count_word(str, charset));
	// Test 3: String with spaces as delimiters
	str = "Hello World This Is A Test";
	charset = " ";
	printf("Test 3 - Expected wordcount: 6, Actual wordcount: %d\n",
		ft_count_word(str, charset));
	// Test 4: Empty string
	str = "";
	charset = "+-";
	printf("Test 4 - Expected wordcount: 0, Actual wordcount: %d\n",
		ft_count_word(str, charset));
	// Test 5: String with multiple character delimiters
	str = "Hello***World**This*Is*A*Test";
	charset = "*";
	printf("Test 5 - Expected wordcount: 6, Actual wordcount: %d\n",
		ft_count_word(str, charset));
	// Test 6: String with multiple different delimiters
	str = "Hello,World,This,Is,A,Test;2";
	charset = ",;";
	printf("Test 6 - Expected wordcount: 7, Actual wordcount: %d\n",
		ft_count_word(str, charset));
	// Test 7: Extended charsets with multiple characters
	str = "Hello+-*World+This-Is*A-Test*-";
	charset = "+-*";
	printf("Test 7 - Expected wordcount: 6, Actual wordcount: %d\n",
		ft_count_word(str, charset));
	// Test 8: Chars in charset present in between words
	str = "Hello+-*World+++Hello-World*This*Is*A-Test*-";
	charset = "+-*";
	printf("Test 8 - Expected wordcount: 8, Actual wordcount: %d\n",
		ft_count_word(str, charset));
	// Test 9: String with multiple repeating delimiters
	str = "Hello,,,World;This;;Is,A,;Test";
	charset = ",;";
	printf("Test 9 - Expected wordcount: 6, Actual wordcount: %d\n",
		ft_count_word(str, charset));
	// Test 10: Extended charset with different characters
	str = "Hello@World#This$Is%Test";
	charset = "@#$%";
	printf("Test 10 - Expected wordcount: 5, Actual wordcount: %d\n",
		ft_count_word(str, charset));
	// Test 11: Using numbers as delimiters
	str = "Hello1World2This3Is4A5Test";
	charset = "12345";
	printf("Test 11 - Expected wordcount: 6, Actual wordcount: %d\n",
		ft_count_word(str, charset));
	// Test 12: Mixed charsets
	str = "Hello@World#This$Is%Test1A2B3C";
	charset = "@#$%123";
	printf("Test 12 - Expected wordcount: 8, Actual wordcount: %d\n",
		ft_count_word(str, charset));
	return (0);
}
