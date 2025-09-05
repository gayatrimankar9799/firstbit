//Write a menu driven program to take a number for user and perform operations as follows.
//
//Press 1.To check number is even or odd.
//2.To check number is prime or not.
//3.To check number is pallindrome or not.
//4.To check number is positive, negative or zero.
//5.To reverse a number.
//6.To find sum of digits.
void main()
{
	int ch;
	printf("Press 1.To check number is even or odd. \n 2.To check number is prime or not. \n 3.To check number is pallindrome or not. \n 4.To check number is positive, negative or zero. \n 5.To reverse a number. \n6.To find sum of digits.\n ");
	scanf("%d",&ch);
	if(ch==1)
	{
		int no1;
		printf("Enter the no: ");
		scanf("%d",&no1);
		
		if(no1%2==0)
		{
			printf("Even number %d",no1);
		}
		else
		{
			printf("odd number %d",no1);
		}
		
	}
	else if(ch==2)
	{
		int no;
	
	printf("enter a number");
	scanf("%d" ,&no);
	int i=2; //prime starting from 2
	int status=0;
	while(i<=no/2)
	{
		if(no%i==0)
		{
			status=1;
			break;
			
		}
		i++;
	}
		if(status==0)//status is 0 prime or status is 1 not prime
		{
			printf("number is prime");
		}
		else
		{
			printf("number is not prime");
		}
	}
	else if(ch==3)
	{
	int no;
	printf("enter a number");
	scanf("%d",&no);
	int temp=no;
	int rev=0,rem;
	while(no>0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	if(temp==rev)
		printf("%d palindrome number ",temp);
	else
		printf("%d  not palindrome number ",temp);
	}
	
	else if(ch==4)
	{	
	int no=0;
	if(no>0)
	{
		printf("Positive number");
	}
	else
	{
		if(no<0)
		{
			printf("Negative number");
		}
		else
		{
			printf("Netural number");
		}
	}
	}
	else if(ch==5)
	{int no;
	printf("enter a number");
	scanf("%d",&no);
	int temp=no;
	int rev=0,rem;
	while(no>0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}

		printf("%d reverse number ",rev);
	
	
	}
	else if(ch==6)
	{
		int no=12345;
		int r1,sum=0;
	while(no>0)
	{
		r1=no%10;
		sum=sum+r1;
		no=no/10;
		
	}
	printf("Sum of digit: %d",sum);
	}
	else
	{
		printf("invalid choice");
			
	}
}