#include <stdio.h>
void main()
{
	int a[5], i, j, temp;
	printf("Enter Array: \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	// to  print Ascending Order:
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nAscending Order : ");
	for (i = 0; i < 5; i++)
	{
		printf(" %d", a[i]);
	}
	// to print Descending Order:
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n\nDescending Order: ");
	for (i = 0; i < 5; i++)
	{
		printf(" %d", a[i]);
	}
	printf("\n\n----------------------------");
}
