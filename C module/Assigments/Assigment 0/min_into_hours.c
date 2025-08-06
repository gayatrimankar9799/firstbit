//Write a C program to convert given minutes into hours and remaining minutes.

void main()
{
	int min=5600,hours,remaining_min;
	hours=min/60;
	remaining_min=min%60;
	printf("Hours: %d, Minutes: %d\n", hours, remaining_min);
	
}