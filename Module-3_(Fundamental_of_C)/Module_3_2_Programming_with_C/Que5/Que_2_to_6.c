#include <stdio.h>
void main()
{
    int a[10], i = 1, even, odd, sume, sumo;

    printf("Enter Any 10 Digits : \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    even = 0;
    odd = 0;
    sume = 0;
    sumo = 0;

    // Even Numbers Calculations
    for (i = 0; i <= a[i]; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
    }
    printf("\nTotal Even Numbers are : %d", even);

    printf("\nEven Numbers are : ");
    for (i = 0; i <= a[i]; i++)
    {
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
            sume = sume + a[i];
    }
    printf("\nTotal Sum of Even Numbers is: %d", sume);

    // Odd Numbers Calculations
    for (i = 0; i <= a[i]; i++)
    {
        if (a[i] % 2 == 1)
        {
            odd++;
        }
    }
    printf("\n\nTotal Odd Numbers are : %d", odd);

    printf("\nOdd Numbers are : ");
    for (i = 0; i <= a[i]; i++)
    {
        if (a[i] % 2 == 1)
            printf("%d ", a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 1)
            sumo = sumo + a[i];
    }
    printf("\nTotal Sum of Odd Numbers is: %d", sumo);

    printf("\n\n----------------------------");
}