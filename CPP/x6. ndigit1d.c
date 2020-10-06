//add a number's digits till it becomes a one digit number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, r, s=10;
	printf("The number's digits will be added till the resulting number is a single digit number\n");
	printf("Enter a number\n");
	scanf("%d", &n);
	while(s>9)
	{
		s=0;
		while(n>0)
		{
			r=n%10;
			s=s+r;
			n=n/10;
		}
		printf("%d\n", s);
		n=s;
	}
	printf("\nThe last single digit number is %d", s);
	getch();
}
