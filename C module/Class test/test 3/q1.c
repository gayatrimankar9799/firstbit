//WAP print evne and odd numbers in given range
//e.g i/p start=10 end=25
//o/p odd: 11 13 15 17  19 21 23 25
// e.g i/p start=1 end=15
//o/p even 2 4 6 8 10 12 14

#include<stdio.h>
void main()
{
	int start,end;
	printf("Enter the start number");
	scanf("%d",&start);
	printf("Enter the end number");
	scanf("%d",&end);
	printf("odd:");
	while(start<=end)
	{
			
		if(start%2!=0)
		
			printf("%d ",start);
		start++;
	}
	printf("\n Enter the start number");
	scanf("%d",&start);
	printf("Enter the end number");
	scanf("%d",&end);
	printf("\neven:");
	while(start<=end)
	{
			
		if(start%2==0)
		
			printf("%d ",start);
		start++;
	}
}