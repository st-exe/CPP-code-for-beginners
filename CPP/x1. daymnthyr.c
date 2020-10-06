//days months years
#include<stdio.h>
#include<conio.h>
void main()
{
	int days, months, years;
	printf("Enter number of days\n");
	scanf("%d", &days);
	years=days/365;
	days=days%365;
	months=days/30;
	days=days%30;
	while((months/12)>0)
	{
		if(months>=12)
		{
			years++;
			months=months-12;
		}
	}
	printf("\n%d years, %d months and %d days", years, months, days);
	getch();
}
