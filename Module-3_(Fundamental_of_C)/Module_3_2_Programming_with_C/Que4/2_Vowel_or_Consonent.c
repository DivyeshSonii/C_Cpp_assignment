#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",& ch);

    switch(ch)
    {
        case 'a':
        printf("%c is Vowel.", ch);
        break;

        case 'e':
        printf("%c is Vowel.", ch);
        break;

        case 'i':
        printf("%c is Vowel.", ch);
        break;

        case 'o':
        printf("%c is Vowel.", ch);
        break;

        case 'u':
        printf("%c is Vowel.", ch);
        break;

        default:
        printf("%c is Consonent.",ch);
        break;
    }
}