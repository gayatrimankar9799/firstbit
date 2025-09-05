//4. Print strong numbers in the given range 1 to n.
void main()
{
	int no,num ;
	printf("Enter the numberrange ");
	scanf("%d",&no);
	for(num=1;num<=no;num++)
	{
	
	int temp;
	temp=num;
	int sum=0;
	


	while(temp>0)
	{
		int rem=temp%10;
		int fact=1;
		for(int i=1;i<=rem;i++)
		{
			fact=fact*i;
			
		}
		sum=sum+fact;
		temp=temp/10;
		
	}
	if(sum==num)
		printf("%d  strong number \n",num);
}
}