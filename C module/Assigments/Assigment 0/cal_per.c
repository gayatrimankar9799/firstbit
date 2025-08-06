//Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.

void main()
{
	int a1=90,a2=80,a3=88,a4=90,a5=90,total,per;
	total=a1+a2+a3+a4+a5;
	per=(total*100)/500;
	printf("total subject marks %d",total);
	printf("\n percentage is %d",per);
	
}