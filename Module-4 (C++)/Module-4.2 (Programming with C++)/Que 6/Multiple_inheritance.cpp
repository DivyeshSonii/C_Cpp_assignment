#include <iostream>
using namespace std;
class person
{
    char name[20];
    int age;

public:
    void input()
    {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
    void display()
    {
        cout << "\n\nStudent Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class student
{
    int subject;
    int total_marks;
    float percentage;
    float per()
    {
        percentage = total_marks / subject;
        return percentage;
    }

public:
    void getdata()
    {
        cout << "Enter Number of Subjects: ";
        cin >> subject;
        cout << "Enter Total Marks: ";
        cin >> total_marks;
    }

    void showdata()
    {
        cout << "Total Subjects: " << subject << endl;
        cout << "Total Marks: " << total_marks << endl;
        cout << "Percentage: " << per() << "%" << endl;
    }
};

class teacher : public person, public student
{
    int salary;

public:
    void getvalue()
    {
        cout << "Enter Teacher Salary: ";
        cin >> salary;
    }
    void showvalue()
    {
        cout << "Teacher Salary: " << salary << endl;
        cout << "\n\n";
    }
};

int main()
{
    teacher t1;
    t1.input();
    t1.getdata();
    t1.getvalue();
    t1.display();
    t1.showdata();
    t1.showvalue();
    return 0;
}