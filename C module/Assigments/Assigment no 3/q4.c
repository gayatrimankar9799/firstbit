//Check the given number is prime or not.
//Input: n = 7 
//Output: Prime
void main()
{
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	int i=2;//prime starting for 2
	int status=0;//status are value assign in zero when status is zero then prime number
	while(i<=no/2)//no is spliting the range
	{
		if(no%i==0)
		{
			status=1;
			break;
		}
		i++;
		
	}
	if(status==0)
	{
		printf("%d prime number",no);
		
	}
	else
	{
		printf("%d not prime number",no);
	}
}