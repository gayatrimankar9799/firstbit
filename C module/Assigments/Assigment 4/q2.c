//Print prime numbers in the given range 1 to n.\
#include<stdio.h>
void main()
{
	int no,num;
	
	printf("enter a number range ");
	scanf("%d" ,&no);
	for(num=1;num<=no;num++)
	{
	
	int i=2; //prime starting from 2
	int status=0;
	while(i<=num/2)
	{
		if(num%i==0)
		{
			status=1;
			break;
			
		}
		i++;
	}
		if(status==0)//status is 0 prime or status is 1 not prime
		{
			printf("Prime number is: %d \n",num);
		}
		
	}
}