//entering and displaying structure
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	char name[50];
	int roll;
	int marks;
} s[10];
void main()
{
	int n, i;
	//entering structure values
	printf("Enter no. of students\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		s[i].roll=i+1;
		printf("\nFor roll no. %d\n", s[i].roll);
		printf("Enter name: ");
		scanf("%s", s[i].name);
		printf("Enter marks: ");
		scanf("%d", &s[i].marks);
	}
	printf("\n\n");
	//displaying structure values
	for(i=0; i<n; i++)
	{
		printf("%d\t", s[i].roll);
		printf("%s\t", s[i].name);
		printf("%d\n", s[i].marks);
	}
	getch();
}
