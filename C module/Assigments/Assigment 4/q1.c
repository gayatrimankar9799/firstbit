//Print armstrong numbers in the given range 1 to n.

void main()
{
	int no,temp;
	int num ,sum,i;
	printf("Enter the numberrange ");
	scanf("%d",&no);
for(int num=1;num<=no;num++)
{
	int t=num;
	
		int count=0;
			temp=num;
		while(temp>0)
		{
			count++;
			temp=temp/10;
			
		}
	//	printf("Count is %d",count);


		int sum=0,rem;
		while(temp>0)
		{
			
			    
			rem=temp%10;
			int res=1;
			for(int i=1;i<=count;i++)
			{
				res=res*rem;
			}
		 sum=sum+res;
		 temp=temp/10;
		}
		if(sum==temp)
		{
			printf("%d armstrong number",temp);
		}
		
	}
}

