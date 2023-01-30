#include <iostream>
using namespace std;

float area(float r)
{
    cout << "\n\n\nArea of Circle: ";
    return (3.14 * r * r);
}
float area(float ba, float h)
{
    cout << "\nArea of Triangle: ";
    return ((ba * h) / 2);
}
int area(int l, int b)
{
    cout << "\nArea of Rectangle: ";
    return (l * b);
}

int main()
{
    int l, b;
    float r, ba, h;

    cout << "Enter radius of Circle: ";
    cin >> r;
    cout << "Enter Base & Height of Triangle: ";
    cin >> ba >> h;
    cout << "Enter Length & Breadth of Rectangle: ";
    cin >> l >> b;

    cout << area(r);
    cout << area(ba, h);
    cout << area(l, b);
    return 0;
}