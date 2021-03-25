#include <string.h>

int main(void)
{
	char *str_uppercase;
	char *str_not_uppercase;

	str_uppercase = "ABCD";
	str_not_uppercase = "ABcd";
	printf("1 when %d\n", ft_str_is_uppercase(str_uppercase));
	printf("0 when %d\n", ft_str_is_uppercase(str_not_uppercase));
}