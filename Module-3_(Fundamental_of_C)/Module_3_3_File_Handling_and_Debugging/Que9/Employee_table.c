#include <stdio.h>
#include <string.h>

struct employee
{
    char name[50];
    int number;
    char address[10];
    int age;
};
int main()
{
    int n;
    printf("Enter Number of Employee: ");
    scanf("%d", &n);

    struct employee e[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Details of Employee %d: \n", i + 1);

        printf("Enter Name: ");
        scanf("%s", e[i].name);
        printf("Enter Phone Number: ");
        scanf("%d", &e[i].number);
        printf("Enter Address: ");
        scanf("%s", &e[i].address);
        printf("Enter Age: ");
        scanf("%d", &e[i].age);
    }
    printf("**************************************************************************\n");
    printf("|\tName\t|\tNumber\t|\tAddress\t|\tAge\t|\n");
    for (int i = 0; i < n; i++)
    {
        printf("--------------------------------------------------------------------------\n");
        printf("|\t%s\t|\t%d\t|\t%s\t|\t%d\t|\n", e[i].name, e[i].number, e[i].address, e[i].age);
    }
    printf("**************************************************************************\n");
    return 0;
}