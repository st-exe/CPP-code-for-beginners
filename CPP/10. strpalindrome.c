//string palindrome
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100], b[100];
	printf("Enter a string\n");
	gets(a);
	strcpy(b, a);
	strrev(b);
	puts(b);
	if(strcmp(b, a)==0)
	 printf("\nString is a palindrome");
	else
	 printf("\nString is not a palindrome");
	 getch();
}
