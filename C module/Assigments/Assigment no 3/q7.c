//Find factorial of given number.
//Input: n = 5
//Output: 120
void main()
{
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	int fact=1;
	while(no>1)
	{
		
		fact=fact*no;
		no--;
	}
	printf("Factorial number %d ",fact);
}
