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
      cout<<"A="<<a<<"\n"<<"B="<<b<<endl;
   }
   demo operator+(demo d1)
   {
      demo temp(0,0);
      temp.a=a+d1.a;
      temp.b=b+d1.b;
      return temp;
   }
};
void main()
{
  clrscr();
  demo ob(10,20),ob1(30,40),ob2(0,0);
  ob2=ob+ob1;
  ob2.show();
  getch();
}