#include <stdio.h>
void main()
{
    int n, m, sum = 0;

    printf("Enter any Number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    printf("Sum of given numer is = %d", sum);
}