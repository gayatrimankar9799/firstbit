//Wap to add alternate number from given range
//e.g i/p start=1,end=5
//o/p: 9
#include<stdio.h>
void main()
{
	int start,end;
	printf("Enter the start number");
	scanf("%d",&start);
	printf("Enter the end number");
	scanf("%d",&end);
	int sum=0;
	while(start<=end)
	{
		
		if(start%2!=0)
			sum=sum+start;
		
		//start++;
		
	}
	printf("sum %d ",sum);
	
}