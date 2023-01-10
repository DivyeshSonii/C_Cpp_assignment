#include <stdio.h>
void main()
{
    int k = 1, i, j, n;
    printf("Enter Size: ");
    scanf("%d", &n);

    for (i = k; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %c", (char)(k + 64));
            k++;
        }
        printf("\n");
    }
}
