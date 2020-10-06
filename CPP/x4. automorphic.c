//automorphic
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n, i=0, x, y, z, sq;
	printf("Enter a number\n");
	scanf("%d", &n);
	x=n;
	while(n>0)
	{
		n=n/10;
		i++;
	}
	sq=x*x;
	z=pow(10, i);
	y=sq%z;
	if(x==y)
	 printf("\nIt is an automorphic number");
	else
	 printf("\nIt is not an automorphic number");
	getch();
}
