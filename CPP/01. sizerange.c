//size and range
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<float.h>
void main()
{
	printf("Size of integer: %d", sizeof(int));
	printf("\nRange of integer: from %d to %d", INT_MIN, INT_MAX);
	printf("\n\nSize of float: %d", sizeof(float));
	printf("\nRange of float: from %e to %e", FLT_MIN, FLT_MAX);
	printf("\n\nSize of character: %d", sizeof(char));
	printf("\nRange of character: from %d to %d", SCHAR_MIN, SCHAR_MAX);
	printf("\n\nSize of double: %d", sizeof(double));
	printf("\nRange of double: from %e to %e", DBL_MIN, DBL_MAX);
	getch();
}

