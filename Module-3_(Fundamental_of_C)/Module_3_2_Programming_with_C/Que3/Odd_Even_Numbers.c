#include<stdio.h>
void main()
{
	int i;
	printf("Enter any number: ");
	scanf("%d",& i);
	
	if ( i % 2 == 0)
	{
		if ( i == 0 )
		{
			printf("%d is Rational number.", i);
		}	
		else 
		{
			printf ("%d is a Even number.", i);
		}
	}
	else
	{
		printf("%d is a Odd number.", i);
	}
}	

