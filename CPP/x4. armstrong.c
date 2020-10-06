//armstrong
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, x, r, s=0;
	printf("Enter a number\n");
	scanf("%d", &n);
	x=n;
	while(n>0)
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(x==s)
	 printf("\nIt is an armstrong number");
	else
	 printf("\nIt is not an armstrong number");
	getch();
}
