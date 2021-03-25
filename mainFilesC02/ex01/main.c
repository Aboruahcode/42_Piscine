int main()
{
	char *src;
	char dest[12];

	src = "Hello World";
	printf("base   : %s\n", src);
	ft_strncpy(dest, src, 8);
	printf("src    : %s\n", dest);
	strncpy(dest, src, 8);
	printf("dest   : %s\n", dest);
}


int main(void)
{
    int m = 7;
    char p[100] = {};
    char z[] = "Hello World";
    ft_strncpy(p, z, m);
    printf("%s\n", p);
}