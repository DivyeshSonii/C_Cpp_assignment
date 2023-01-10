#include <stdio.h>
struct factory
{
    int id;             // size = 4
    char item_name[50]; // size = 50
    float price;        // size = 4
    // total size = 4 + 50 + 4 = 58 + 2(structure padding) = 60
};
union warhouse
{
    int id;             // size = 4---- will not get count
    char item_name[50]; // size = 50---- will get count
    float price;        // size = 4---- will not get count
    // total size = 0 + 50 + 0 = 50 + 2(union padding) = 52
};

int main()
{
    struct factory items1;
    union warhouse items2;

    printf("Size of Factory Structure= %d\n", sizeof(items1));
    printf("Size of Warhouse Structure= %d\n", sizeof(items2));
    return 0;
}