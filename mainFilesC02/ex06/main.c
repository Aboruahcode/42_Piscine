int main(void)
{
	char *str_printable;
	char *str_not_printable;

	str_printable = "abcd1!";
	str_not_printable = "AB\t\tcd";
	printf("1 when %d\n", ft_str_is_printable(str_printable));
	printf("0 when %d\n", ft_str_is_printable(str_not_printable));
}