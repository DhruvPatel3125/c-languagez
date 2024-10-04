#include<iostream.h>
#include<conio.h>
class magic
{
   int a;
   public:
   magic()
   {
      a=0;
   }
   void operator ++()
   {
      a+=10;
   }
   void display()
   {
      cout<<"\n A is:"<<a;
   }
};
void main()
{
   clrscr();
   magic m1;
   m1.display();
   m1++;   //calling ++operator()
   m1.display();
   getch();
}
