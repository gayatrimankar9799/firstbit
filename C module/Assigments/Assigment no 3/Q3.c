//Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15
void main()
{
	int start=1;
	int end=5;
	int sum=0;
	while(start<=end)
	{
		sum=sum+start;
		start++;
		
	}
	printf("Sum of range:%d ",sum);
}