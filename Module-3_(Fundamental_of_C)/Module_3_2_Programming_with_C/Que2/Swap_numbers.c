#include<stdio.h>
void main()
{
    int A= 50, B= 30;

    A=A+B;
    B=A-B;
    A=A-B;

    printf("A= %d", A);
    printf("\nB= %d", B);
}