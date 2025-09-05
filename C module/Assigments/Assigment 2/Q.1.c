////Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
void main()
{
	char ope='/';
	int no1=30;
	int no2=40,res;
	if(ope=='+')
	{
		res=no1+no2;
		printf("Addition=%d",res);
	}
	else
	{
	
		if(ope=='-')
		{
			res=no1-no2;
			printf("Subtraction=%d",res);
		}
		else
		{
			if(ope=='*')
			{
				res=no1*no2;
				printf("Multiplication=%d",res);
			}
			else
			{
				if(ope=='/')
				{
					res=no1/no2;
					printf("Division=%d",res);	
				}
				else
				{
					if(ope=='%')
					{
						res=no1%no2;
						printf("mod =%d",res);
					}
				}
			}
		}
	}
}