#include <stdio.h>
void main()
{
    int i, j, k, n;
    printf("Enter Size: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
}