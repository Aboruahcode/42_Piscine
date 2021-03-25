

#include <string.h>

int main(void)
{
	char *str_lowercase;
	char *str_not_lowercase;

	str_lowercase = "abcd";
	str_not_lowercase = "ABcd";
	printf("1 when %d\n", ft_str_is_lowercase(str_lowercase));
	printf("0 when %d\n", ft_str_is_lowercase(str_not_lowercase));
}