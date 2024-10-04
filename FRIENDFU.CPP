#include<iostream.h>
#include<conio.h>
//using namespace std;
class abc
{
 int x,y;
 public:
 void setdata (int no1, int no2)
 {
 x=no1;
y=no2;
 }
 friend void max (abc); //friend function.
};
void max (abc a1)
{
 if (a1.x > a1.y)
 cout<<"Big No is : "<< a1.x <<"\n";
 else
 cout<<"Big No is : "<< a1.y <<"\n";
}
void main ()
{
clrscr();
abc a;
 a.setdata (10,20);
 max (a);
 getch();
}
