//sum of numbers till n
#include <stdio.h>
#include<conio.h>
void main()
{
	int i, sum=0, n;
	printf("Enter n\n");
	scanf("%d", &n);
	for(i=0; i<=n; i++)
	 sum=sum+i;
	printf("\nSum is %d", sum);
	getch();	
}
