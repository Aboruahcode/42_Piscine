int		main(void)
{
	char	*str_upper;
	char	str_lower[12];
	int		index;

	str_upper = "HELLO WoRLD";
	index = 0;
	while (index < 12)
	{
		str_lower[index] = str_upper[index] + 0;
		index++;
	}
	ft_strlowcase(&str_lower[0]);
	printf("Uppercase: %s\n", str_upper);
	printf("Lowercase: %s\n", str_lower);
}