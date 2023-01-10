#include <stdio.h>

void addition()
{
    int a, b;
    printf("\nEnter number of rows: ");
    scanf("%d", &a);
    printf("Enter number of columns: ");
    scanf("%d", &b);

    int m1[a][b];
    printf("\nEnter elements of 1st matrix: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }

    int m2[a][b];
    printf("\nEnter elements of 2nd matrix: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }
    printf("\n");

    int m3[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d  ", m3[i][j]);
        }
        printf("\n");
    }
    printf("\n-----------------------------*-----------------------------\n");
}

void subtraction()
{
    int a, b;
    printf("\nEnter number of rows: ");
    scanf("%d", &a);
    printf("Enter number of columns: ");
    scanf("%d", &b);

    int m1[a][b];
    printf("\nEnter elements of 1st matrix: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }

    int m2[a][b];
    printf("\nEnter elements of 2nd matrix: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }
    printf("\n");

    int m3[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            m3[i][j] = m1[i][j] - m2[i][j];
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d  ", m3[i][j]);
        }
        printf("\n");
    }
    printf("\n-----------------------------*-----------------------------\n");
}

void multiplication()
{
    int a, b;
    printf("\nEnter number of rows: ");
    scanf("%d", &a);
    printf("Enter number of columns: ");
    scanf("%d", &b);

    int m1[a][b];
    printf("\nEnter elements of 1st matrix: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }

    int m2[a][b];
    printf("\nEnter elements of 2nd matrix: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }
    printf("\n");

    int m3[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            m3[i][j] = m1[i][j] * m2[i][j];
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d  ", m3[i][j]);
        }
        printf("\n");
    }
    printf("\n-----------------------------*-----------------------------\n");
}

int main()
{
    int choose;
    do
    {
        printf("Select an option: \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
    again:
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            addition();
            break;

        case 2:
            subtraction();
            break;

        case 3:
            multiplication();
            break;

        default:
            printf("Invalid number *Please try again*\n");
            printf("\n-----------------------------*-----------------------------");
            goto again;
            break;
        }
    } while (choose != 3);
    return 0;
}