#include<stdio.h>
void main()
{
	int year;
	
	printf("Enter a Year: ");
	scanf("%d",& year);
	
	if (year%4 == 0)
	{
		if (year%100 == 0)
		{
			if (year%400 == 0)
			{
				printf("\n Year is a leap year.");
			}
			else
			{
				printf("\n Year is not a leap year.");
			}
		}
		else
		{
			printf("\nYear is a leap year.");
		}
	}
	else
	{
		printf("\nYear is not a leap year.");
	}
}










