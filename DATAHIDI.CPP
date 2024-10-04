#include <iostream.h>
#include <conio.h>
// using namespace std;
class ABC
{
    int num; // by default private
public:
    void read();
    void print();
};

void ABC ::read()
{
    cout << "Enter any Integer value" << endl;
    cin >> num;
}

void ABC ::print()
{
    cout << "The value is " << num << endl;
}

void main()
{
    clrscr();
    ABC obj;
    obj.read();
    obj.print();
    getch();
}
