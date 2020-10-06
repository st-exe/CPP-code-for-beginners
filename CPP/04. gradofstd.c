//grade of student
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1, m2, m3, m4, m5;
	float avg;
	char grade;
	printf("Enter marks\n");
	scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
	avg=(m1+m2+m3+m4+m5)/5;
	if(avg>=91)
	 grade='A';
	if((avg>=71)&&(avg<91))
	 grade='B';
	if((avg>=51)&&(avg<71))
	 grade='C';
	if((avg>=41)&&(avg<71))
	 grade='D';
	if(avg<41)
	 grade='F';
	printf("\nPercentage: %f%\tGrade: %c", avg, grade);
	getch();
}
