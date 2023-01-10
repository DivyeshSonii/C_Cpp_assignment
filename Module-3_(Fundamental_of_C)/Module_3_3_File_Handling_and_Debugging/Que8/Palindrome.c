#include <stdio.h>
#include <string.h>

int main()
{
    char a[5000];

    printf("Enter the string: ");
    gets(a);

    char b[5000];
    strcpy(b, a);
    strrev(b);

    if (strcmp(a, b) == 0)
        printf("%s is a palindrome\n", a);
    else
        printf("%s is not t a palindrome\n", a);

    return 0;
}