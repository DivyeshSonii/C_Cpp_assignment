#include <iostream>
using namespace std;

int calculator(int a, int b, int c)
{
    cout << "\n\nAddition: ";
    return a + b + c;
}

int calculator(int c, int d)
{
    cout << "\nSubtraction: ";
    return c - d;
}

double calculator(int e, double f)
{
    cout << "\nMultiplication: ";
    return e * f;
}

double calculator(double m, double n)
{
    cout << "\nDivision: ";
    return m / n;
}

int main()
{
    cout << calculator(50, 88, 5);
    cout << calculator(5, 2);
    cout << calculator(2, 2.2);
    cout << calculator(6.5, 2.2);
    return 0;
}