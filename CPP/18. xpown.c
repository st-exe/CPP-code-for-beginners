//x^n
#include<stdio.h>
#include<conio.h>
int pwr(int, int);
int main()
{
	int base, power, result;
	printf("Enter base: ");
	scanf("%d", &base);
	printf("Enter power: ");
	scanf("%d", &power);
	result=pwr(base, power);
	printf("%d^%d = %d", base, power, result);
	getch();
	return 0;
}
int pwr(int base, int power)
{
	if(power!=0)
	 return(base*pwr(base, (power-1)));
	else
	 return 1;
}

