#include <stdio.h>
#include <string.h>

int main()
{
    char str[5000];
    printf("Enter a string: \n");
    gets(str);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("Length of a string is: %d", count);
    return 0;
}