//Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.
void main()
{
	int side1=10,side2=10,side3=10;
	if(side1==side2 && side2==side3)
	{
		printf("Equilateral triangle");
	}
	else
	{
		if(side1==side2|| side2==side3|| side1==side3)
		{
		 printf("isosceles triangle");	
		}
		else
		{
			printf("scalene triangle");	
		}
	}
}