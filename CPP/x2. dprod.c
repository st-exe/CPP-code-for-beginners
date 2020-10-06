//product of digits
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, r, p=1;
	printf("Enter a number \n");
	scanf("%d", &n);
    while(n>0)
    {
    	r=n%10;
    	p=p*r;
    	n=n/10;
	}
	printf("Product of digits is %d", p);
	getch();
}
