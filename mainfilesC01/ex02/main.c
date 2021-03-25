int main(void)
{
	int a = 1;
	int b = 2;

	printf("a is %d\n", a);
	printf("b is %d\n", b);
	printf("Swapping...\n");
	ft_swap(&a, &b);
	printf("Swapped!\n");
	printf("a is %d\n", a);
	printf("b is %d\n", b);
}

int main(void)
{
    int x;
    int y;

    x = 4;
    y = 7;
    ft_swap(&x, &y);
    printf("Swapped numbers: %d , %d \n", x,y);
}