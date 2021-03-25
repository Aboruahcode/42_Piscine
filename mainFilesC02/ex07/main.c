int		main(void)
{
	char	*str_lower;
	char	str_upper[12];
	int		index;

	str_lower = "hello world";
	index = 0;
	while (index < 12)
	{
		str_upper[index] = str_lower[index] + 0;
		index++;
	}
	ft_strupcase(&str_upper[0]);
	printf("Lowercase: %s\n", str_lower);
	printf("Uppercase: %s\n", str_upper);
}