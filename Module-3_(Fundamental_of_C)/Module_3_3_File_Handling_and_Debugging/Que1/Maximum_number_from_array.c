#include <stdio.h>
void main()
{
    int a[10], i, n, max;

    printf("Enter a size of array: ");
    scanf("%d", & n);

    printf("\n Enter array numbers:\n");
    for (i=0; i<n; i++)
    {
        scanf("%d", & a[i]);
    }

    max=a[0];
    for(i=0; i<n; i++)
    {
        if (max<a[i])
        max= a[i];
    }
    printf("\nMaximum number in the array is : %d", max);
}