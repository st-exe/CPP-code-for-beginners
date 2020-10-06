//julian date
#include<stdio.h>
#include<conio.h>
void main()
{
	int d, y, m;
	printf("Enter the date in dd/mm/yyyy format \n");
	scanf("%d%d%d", &d, &m, &y);
	m=m-1;
	switch(m)
	{
	 case 11: d=d+30;
	 case 10: d=d+31;
	 case 9	: d=d+30;
	 case 8 : d=d+31;
	 case 7 : d=d+31;
	 case 6	: d=d+30;
	 case 5 : d=d+31;
	 case 4 : d=d+30;
	 case 3 : d=d+31;
	 case 2 : if(y%4==0)
	           d=d+29;
	          else
	           d=d+28;
	 case 1	: d=d+31;
	 }
	 printf("\nThe julian date is %d", d);
	 getch();
}
