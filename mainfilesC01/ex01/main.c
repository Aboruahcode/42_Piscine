int main(void)
{
	int a;
	a = 100;
	int *p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;
	ft_ultimate_ft(p9);
	printf("%d\n", a);
	return 0;
}

int main(void)
{
    int a;
    int *b;
    int **c;
    int ***d;
    int ****e;
    int *****f;
    int ******g;
    int *******h;
    int ********i;
    int *********nbr;

    a = 1;
    b = &a; 
    c = &b;
    d = &c;
    e = &d;
    f = &e;
    g = &f;
    h = &g;
    i = &h;
    nbr = &i;

    ft_ultimate_ft(nbr);
    printf("The value of nbr: %d \n", *********nbr);
}