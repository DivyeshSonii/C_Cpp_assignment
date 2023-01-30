#include <iostream>
using namespace std;

template <class Swap>

int swapping(Swap &a, Swap &b)
{
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    Swap temp;
    temp = a;
    a = b;
    b = temp;

    cout << "\n\nAfter Swapping: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    return 0;
}

int main()
{
    int a, b;
    swapping(a, b);
    return 0;
}