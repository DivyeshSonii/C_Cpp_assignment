#include <iostream>
using namespace std;
class cricketer
{
    char country_name[20];

public:
    void country()
    {
        cout << "Enter Country Name: " << endl;
        cin >> country_name;
    }
};
class Batsman : public cricketer
{
    char batsman_name[20];
    int innings, not_out, total_runs;
    float bat_avg;
    float avg()
    {
        bat_avg = (float)total_runs / ((float)innings - (float)not_out);
        return bat_avg;
    }

public:
    void input_data()
    {
        cout << "Enter Batsman Name: " << endl;
        cin >> batsman_name;
        cout << "Enter Innings: " << endl;
        cin >> innings;
        cout << "Enter not outs: " << endl;
        cin >> not_out;
        cout << "Enter Total Runs: " << endl;
        cin >> total_runs;
    }

    void display()
    {
        cout << "\n\nBatsman name: " << batsman_name << endl;
        cout << "Innings: " << innings << endl;
        cout << "Not out: " << not_out << endl;
        cout << "Total Runs: " << total_runs << endl;
        cout << "Avg: " << avg() << endl;
        cout << "Best Performance: " << batsman_name << endl;
    }
};
int main()
{
    Batsman b;
    b.country();
    b.input_data();
    b.display();
    return 0;
}