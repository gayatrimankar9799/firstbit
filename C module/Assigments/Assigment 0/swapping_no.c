//Write a C program to swap two numbers using a temporary third variable.
void main()
{
	int a=10,b=20,temp;
	
	temp=a;
	a=b;
	b=temp;
	
	printf("After swapping number is %d %d",a,b);
}

	                                              