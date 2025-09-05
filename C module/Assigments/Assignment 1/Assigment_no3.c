//Write a program to check given 3 digit number is pallindrome or not.
int palindrome();
void main()
{
	if(	palindrome())
		printf("No is palindrome");
	else
		printf("No is not palindrome");
}
int palindrome()
{

	int no;
	printf("Enter the no");
	scanf("%d",&no)
	int r1,r2,r3,rev;
	int q1;
	
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	
	rev=r1*100+r2*10+r3;
	
	if(no==rev)
	{
		
		return 0;
	}
	else
	{
		
	 	return 1;
	
	}
	
}