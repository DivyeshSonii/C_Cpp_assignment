#include <iostream>
#include <math.h>
using namespace std;
class operations
{
    int a, b;

public:
    inline void multiplication()
    {
        cout << "\nMultiplication" << endl;
        cout << "Enter Two value: \n";
        cin >> a >> b;
        cout << "\n\nMultiplication of " << a << " & " << b << " is : " << a * b << endl;
        cout << "******************************************************************" << endl;
    }

    inline void cube()
    {
        cout << "\nCube" << endl;
        cout << "Enter value: \n";
        cin >> a;
        cout << "\n\nCube of " << a << " is : " << a * a << endl;
        cout << "******************************************************************" << endl;
    }
};

int main()
{
    int k;
    do
    {
        operations i;
        cout << "\n\t\tSelect your choice: " << endl;
        cout << "\nPress 1 for Multiplication\nPress 2 for Cube\nPress 3 to Exit" << endl;
        cin >> k;
        switch (k)
        {
        case 1:
            i.multiplication();
            break;

        case 2:
            i.cube();
            break;

        case 3:
            exit(0);
            break;

        default:
            cout << "Invalid character" << endl;
            break;
        }
    } while (k != 3);
    return 0;
}