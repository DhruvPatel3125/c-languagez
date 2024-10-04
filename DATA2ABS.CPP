#include<iostream.h>
//using namespace std;
#include<conio.h>

class Vehicle
{
	public:
		void company()
		{
			cout<<"TATA\n";
		}
		void model()
		{
			cout<<"TIAGO\n";
		}
		void color()
		{
			cout<<"Red/GREEN/Silver\n";
		}
		void cost()
		{
			cout<<"Rs. 500000 to 1000000\n";
		}
		void oil()
		{
			cout<<"diesel\n";
		}
};
void main()
{
	clrscr();

	Vehicle obj;
	obj.company();
	obj.model();
	obj.color();
	obj.cost();
	obj.oil();
getch();
}
