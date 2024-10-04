// CPP code to demonstrate constructor can have default
// arguments
#include<iostream.h>
#include<conio.h>
class Test //class declare
{
    int a,b,c;
    public:
    Test() //class constructor created
    {
       a=0;
       b=0;
       c=0;
    }
    void input()   //member function of class
    {
       cout<<"\n Enter three no:-";
       cin>>a>>b>>c;
   // }
   // void output()
    //{
       cout<<"\n A:"<<a;
       cout<<"\n B:"<<b;
       cout<<"\n C:"<<c;
    }
};
void main()
{
	clrscr();
	Test t;
	t.input();
       //	t.output();
	getch();
}
