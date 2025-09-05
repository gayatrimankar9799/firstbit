//WAP to check  if number is positive negative or netural
void main()
{
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	if(no>0)
	{
		printf(" %d is positive number",no);
	}
	else if(no<0)
	{
		printf("%d is negative number",no);		
	}
	else
	{
		printf("%d is netural number",no);
	}
}