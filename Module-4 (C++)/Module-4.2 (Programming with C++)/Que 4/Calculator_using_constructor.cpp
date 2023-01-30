#include <iostream>
using namespace std;

class Calculator
{
private:
    int x, y;

public:
    Calculator(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    int add()
    {
        return x + y;
    }

    int subtract()
    {
        return x - y;
    }

    float divide()
    {
        return (float)x / y;
    }

    int multiply()
    {
        return x * y;
    }
};

int main()
{
    int x, y;
    cout << "Enter two values: " << endl;
    cin >> x >> y;
    Calculator calculator(x, y);
    cout << "Addition: " << calculator.add() << endl;
    cout << "Subtraction: " << calculator.subtract() << endl;
    cout << "Division: " << calculator.divide() << endl;
    cout << "Multiplication: " << calculator.multiply() << endl;
    return 0;
}
