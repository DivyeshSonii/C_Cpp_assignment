#include <stdio.h>
void main()
{
    int n, sum, first, last;

    printf("Enter any number: ");
    scanf("%d", &n);

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }
    first = n;

    sum = first + last;

    printf("Sum of First and Last digit is = %d", sum);
}