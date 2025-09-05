/*
WAP to calculate electricity bill
	for 1-50 units -30rs /unit
	for 51-150 units- 40rs
	for 151 and above units -50 rs unit
*/
#include<stdio.h>
void main()
{
	int units,bil;
	printf("Enter the units");
	scanf("%d",&units);
	if(units<=50)
	{
		bil=units*30;
	}
	else if(units<=150)
	{
		bil=units*40;
	}
	else
	{
		bil=units*50;
	}
	
	printf("Electricity bill is %d",bil);
}