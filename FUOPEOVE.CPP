#include<iostream.h>
#include<conio.h>
class demo
{
   int a,b;
   public:
   demo(int x,int y)
   {
     a=x;
     b=y;
   }
   void show()
   {
     cout<<"A="<<a<<" "<<"B="<<b<<endl;
   }
   friend void operator-(demo &obj)
};
   void operator-(demo &obj)
   {
     obj.a=-obj.a;
     obj.b=-obj.b;
   }
void main()
{
   clrscr();
   demo ob(-10,20);
   ob.show();
   -ob;
   ob.show();
   getch();
}