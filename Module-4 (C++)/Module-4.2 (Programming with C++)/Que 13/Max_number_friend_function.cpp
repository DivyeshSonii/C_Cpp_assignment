#include <iostream>
using namespace std;

class Number
{
private:
    int a, b, maxx;

public:
    Number()
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        maxx = max(a, b);
    }
    friend int maximum(Number &s);
};

int maximum(Number &s)
{
    cout << "Maximum is: " << s.maxx << endl;
}

int main()
{
    Number cc;
    maximum(cc);
    return 0;
}