//Write a program to check whether a given year is a leap year.
#include<Stdio.h>
void main()
{
	int year=2004;
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("Leap Year is %d",year);
	}
	else
	{
		printf(" not Leap Year is %d",year);
	}
}