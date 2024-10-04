#include<iostream.h>
#include<conio.h>
class base
{
   public:
   virtual void print()
   {
      cout<<"print base class\n";
   }
   void show()
   {
      cout<<"show base class\n ";
   }
};
class derived:public base
{
   public:
   void print()
   {
      cout<<"print derived class\n";
   }
   void show()
   {
      cout<<"show derived class\n";
   }
};
void main()
{
  clrscr();
  base b;
  base *bptr;
  derived d;
  bptr=&d;
  //virtual fuction,binded at runtime

  bptr->print();
  bptr=&b;
  bptr->print();


  //non-virtual function,binded at compile time
  //bptr->show();
  getch();
}