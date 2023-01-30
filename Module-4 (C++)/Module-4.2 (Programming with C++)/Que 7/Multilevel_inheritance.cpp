#include <iostream>
using namespace std;

class students
{
public:
    int roll_no;
    void rollno()
    {
        cout << "Enter Roll No: ";
        cin >> roll_no;
    }
};

class test
{
public:
    int s1, s2;
    void subjects()
    {
        cout << "Enter Marks of Subject 1 & 2: " << endl;
        cin >> s1 >> s2;
    }
};

class results : public test, public students
{
public:
    void display()
    {
        cout << "\n\nRoll no: " << roll_no;
        cout << "\nTotal marks: " << s1 + s2;
    }
};

int main()
{
    results rr;
    rr.rollno();
    rr.subjects();
    rr.display();
    return 0;
}