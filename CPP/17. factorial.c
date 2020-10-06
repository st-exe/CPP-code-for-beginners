//factorial
#include<stdio.h>
#include<conio.h>
long factorial(int);
int main()
{
	int n;
	long f;
	printf("Enter a number to find its factorial\n");
	scanf("%d", &n);
	if(n<0)
	{
		printf("Factorial of negative integers is not defined");
	}
	else
	{
		f=factorial(n);
		printf("%d! = %d\n", n, f);
	}
	getch();
	return 0;
}
long factorial(int n)
{
	if(n==0)
	 return 1;
	else
	 return(n*factorial(n-1));
}

