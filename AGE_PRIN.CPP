#include<iostream.h>
#include<conio.h>
class test
{
	public:
	int age;
	void printage()
	{
	   cout<<"Your age is:"<<age;
	}
};
void main()
{
    clrscr();
    test obj;
    obj.age=20;
    obj.printage();
    getch();
}