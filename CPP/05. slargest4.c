//second largest among four
#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c, d, l, sl;
	printf("Enter four numbers \n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(a>b)
	{
	 l=a;
	 sl=b;
	}
	else
	{
	 l=b;
	 sl=a;
	}
	if(c>l)
	{
	 sl=l;
	 l=c;
	}
	else
	 if(c>sl)
	  sl=c;
	if(d>l)
	{
	 sl=l;
	 l=d;
	}
	else
	 if(d>sl)
	  sl=d;
	printf("\nSecond largest number is %d", sl);
	getch();
}
