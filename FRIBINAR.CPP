#include<iostream.h>
#include<conio.h>
class demo
{
   int a,b;
   public:
   //demo(){}
   demo(int x,int y)
   {
     a=x;
     b=y;
   }
   void show()
   {
     cout<<"A="<<a<<" "<<"B="<<b<<endl;
   }
     friend demo operator+(demo &obj,demo &obj2)
   };

   demo operator+(demo &obj,demo &obj2)
   {
     demo temp(0,0);
     temp.a=obj.a+obj2.a;
     temp.b=obj.b+obj2.b;
     return temp;
   }
void main()
{
   clrscr();
   demo ob(10,20), ob1(30,40), ob2(0,0);
   ob2=ob+ob1;
   ob2.show();
   getch();
}