//swap w pointer
#include<stdio.h>
#include<conio.h>
void swap(int *, int *);
void main()
{
	int x, y;
	printf("Enter the values of x and y\n");
	scanf("%d%d", &x, &y);
	printf("Before swapping\nx=%d\ny=%d\n", x, y);
	swap(&x, &y);
	printf("After swapping\nx=%d\ny=%d\n", x, y);
}
void swap(int *a, int *b)
{
	int t;
	t=*b;
	*b=*a;
	*a=t;
}
