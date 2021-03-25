int main(void)
{
	char *str_numeric = "12345";
	char *str_not_numeric = "12llo45";

	printf("1 when %d\n", ft_str_is_numeric(str_numeric));
	printf("0 when %d\n", ft_str_is_numeric(str_not_numeric));
}