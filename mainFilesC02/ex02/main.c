int main(void)
{
	char *str_alpha = "HelloWorld";
	char *str_not_alpha = "He//0W0r1d";

	printf("1 when %d\n", ft_str_is_alpha(str_alpha));
	printf("0 when %d\n", ft_str_is_alpha(str_not_alpha));
}