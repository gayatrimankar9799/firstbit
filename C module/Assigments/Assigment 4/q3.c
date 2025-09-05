//3. Print perfect numbers in the given range 1 to n.

void main()
{
	int no,num ,sum,i;
	printf("Enter the numberrange ");
	scanf("%d",&no);
	
for(int num=1;num<=no;num++)
{
	 sum=0;

	for( i=1;i<num;i++)
	{
		if(num%i==0)
			sum=sum+i;
	}
	if(sum==num)
	{	
		printf("%d perfect number\n ",num);
	}
}
}