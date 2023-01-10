#include <iostream>
using namespace std;

int main()
{
    int select;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> select;

    float num1, num2;
    cout << "Enter value 1: ";
    cin >> num1;
    cout << "Enter value 2: ";
    cin >> num2;

    switch (select)
    {
    case 1:
        cout << "Addition: = " << num1 + num2;
        break;

    case 2:
        cout << "Subtraction: = " << num1 - num2;
        break;

    case 3:
        cout << "Multiplication: = " << num1 * num2;
        break;

    case 4:
        cout << "Division: = " << num1 / num2;
        break;
    }

    return 0;
}