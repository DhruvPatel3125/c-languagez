#include<iostream.h>
#include<conio.h>
class demo
{
   public:
   demo()  //constructor
   {
   int    n=10;
      cout<<n;
   }
   ~demo()//destructor
   {
     cout<<"object destroyed";
   }
};
void main()
{
	clrscr();
	demo ob;
	getch();
}
