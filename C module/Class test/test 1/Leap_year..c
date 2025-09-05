//WAP to check if the leap year is not

void main()
{
	int year=1900;
	if(year%4==0 && year%100!=0||year%400==0)
	{
		printf("leap year %d",year);
		
	}
	else
	{
		printf(" no leap  %d",year);	
	}
}