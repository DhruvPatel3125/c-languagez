#include<iostream.h>
#include<conio.h>
class A
{
  public:
virtual  void show() //acually there but not used virtual function
  {
    cout<<"\n base class show method";
  }
};
class B:public A  //base class overide in class b
{
   public:
   void show()
   {
      cout<<"\n child class show method";
   }
};
void main()
{
  clrscr();
  B b1;
  A *ptr; //pointer address hold ,pointer create base class
  ptr=&b1; //reference of pointer object
  ptr->show();//pointer member function call using arrow operator
  //b1.show();
  getch();
}