#include <iostream>
using namespace std;

class jack
{
private:
    int a, b;

public:
    jack()
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;

        a = a + b;
        b = a - b;
        a = a - b;
    }
    friend void swapping(jack &s);
};

void swapping(jack &s)
{
    cout << "\n\n\nAfter Swapping: ";
    cout << "\na= " << s.a << endl;
    cout << "b= " << s.b << endl;
}

int main()
{
    jack object1;
    swapping(object1);
    return 0;
}