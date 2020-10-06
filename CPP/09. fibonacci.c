//fibonacci
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, a=0, b=1, c, i;
	printf("Enter n\n");
	scanf("%d", &n);
	printf("%d %d", a, b);
	while(i<(n-2))
	{
		c=a+b;
		a=b;
		b=c;
		printf(" %d", c);
		i++;
	}
	getch();
}
