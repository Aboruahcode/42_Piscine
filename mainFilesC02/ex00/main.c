int main()
{
	char *src;
	char dest[12];

	src = "Hello World";
	printf("base   : %s\n", src);
	//strcpy(dest, src);
	//printf("src    : %s\n", dest);
	ft_strcpy(dest, src);
	printf("dest   : %s\n", dest);
}
