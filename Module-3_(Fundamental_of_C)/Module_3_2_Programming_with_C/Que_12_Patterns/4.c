#include <stdio.h>
void main()
{
    int i, j, n;

    printf("Enter Size: ");
    scanf("%d", &n);

    for (i = 0; i <= (n / 2) + 1; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = (n / 2) - 1; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}