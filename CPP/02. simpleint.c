//simple interest
#include<stdio.h>
#include<conio.h>
void main()
{
	int si, p, r, t;
	printf("Input principal sum, rate and time\n");
	scanf("%d%d%d", &p, &r, &t);
	si=(p*r*t)/100;
	p=p+si;
	printf("\nSimple interest: Rs. %d\nPrincipal sum:\t Rs. %d", si, p);
	getch();
}
