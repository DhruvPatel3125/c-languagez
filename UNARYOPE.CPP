#include<iostream.h>
#include<conio.h>
class unary
{

	int a;
	public:
	   unary(int x)
	   {
	      a=x;
	   }
	   void operator++()
	   {
		a++;
	   }
	   void display()
	   {
		cout<<"\n a = "<<a;
	   }


};
int main()
{
	clrscr();
	unary u(10);
	u++;
	u.display();
	getch();



}