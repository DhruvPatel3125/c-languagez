#include<iostream.h>
#include<conio.h>
class base
{
   public:
   virtual void getdata()=0;
};
class derived:public base
{
   public:
   void getdata()
   {
      cout<<"derived class";
   }
};
void main()
{
    clrscr();
    base *b;
    derived d1;
    b=&d1;
    b->getdata();
    getch();
}