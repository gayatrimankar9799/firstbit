//6 Check the given number is Perfect number or not.
//Input: n = 28 (1,2,4,7,14,1)(1+2+4+7+14=28)
//Output: Perfect

void main()
{
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	int sum=0;
	for(int i=1;i<no;i++)
	{
		if(no%i==0)
			sum=sum+i;
	}
	if(sum==no)
	{	
		printf("%d perfect number",no);
	}
	else
	{
		printf("%d not perfect number",no);
	}
}