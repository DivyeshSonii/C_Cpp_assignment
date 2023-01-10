#include<stdio.h>
void main()
{
	int i, year, days;
	
	printf("Enter number of days: ");
    scanf("%d", &i);
    
    year = i/365;
    
    days = (i - year*365);
    
    printf("\nYear = %d", year);
    printf("\nDays = %d", days);
}