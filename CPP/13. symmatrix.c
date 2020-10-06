//matrix is symmetric
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10], r, c, s=1, m, n;
	printf("Enter the order of the matrix\n");
	scanf("%d%d", &m, &n);
	printf("Enter the elements\n");
	for(r=0; r<m; r++)
	 for(c=0; c<n; c++)
	  scanf("%d", &a[r][c]);
	//checking begins
	for(r=0; r<m; r++)
	 for(c=0; c<n; c++)
	  if(a[r][c]!=a[c][r])
	  {
	  	s=0;
	  	break;
	  }
	if(s==1)
	 printf("Matrix is symmetric");
	else
	 printf("Matrix is not symmetric");
	getch();
}
