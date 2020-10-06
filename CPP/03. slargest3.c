//slargest3
#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c, l, s, sl;
	printf("Enter three numbers\n");
	scanf("%d%d%d", &a, &b, &c);
	 l=a;
	 if(b>l)
	  l=b;
	if(c>l)
	 l=c;
	s=a;
	if(b<s)
	 s=b;
	if(c<s)
	 s=c;
	sl=(a+b+c)-(l+s);
	printf("\nLargest number:         %d\n", l);
	printf("Smallest number:\t%d\n", s);
	printf("Second largest number:\t%d\n", sl);
	getch();
}
