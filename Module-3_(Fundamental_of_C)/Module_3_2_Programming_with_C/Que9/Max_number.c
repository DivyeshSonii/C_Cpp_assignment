#include<stdio.h>
void main()
{
    int a[5], i, max;
    printf("Enter Numbers: \n");
    for (i=0; i<5; i++)
    {
        scanf("%d",& a[i]);
    }
    max=0;
    for (i=0; i<5; i++)
    {
        if (max<a[i])
        max=a[i];
    }
    printf("Maximum Number is : %d", max);
}