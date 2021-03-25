int main(void)
{
	int a;
	int b;
	int div;
	int mod;
	
	a = 7;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = div %d, mod %d\n", a, b, div, mod);
}

int main(void)
{
    int x = 10;
    int y = 5;
    int div_1 = 0;
    int div_2 = 0;

    ft_div_mod(x, y, &div_1, &div_2);
    printf("%d\n%d\n", div_1, div_2);
}