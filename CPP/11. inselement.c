//insert element
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100], p, c, n, v;
	printf("Enter number of elements in array\n");
	scanf("%d", &n);
	printf("\nEnter the elements\n");
	for(c=0; c<n; c++)
	 scanf("%d", &a[c]);
	printf("\nEnter the values and the position of insertion\n");
	scanf("%d%d", &v, &p);
	for(c=n-1; c>=(p-1); c--)
	 a[c+1]=a[c];
	a[p-1]=v;
	printf("New array is\n");
	for(c=0; c<=n; c++)
	 printf("%d\n", a[c]);
	getch();
}
