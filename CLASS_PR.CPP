#include<iostream.h>
#include<conio.h>
class test
{
  public:
  int age;
  void printage()
  {
     cout<<"your age is:"<<age;
  }
};
void main()
{
   clrscr();
   test obj1;
   obj1.age=20;
   obj1.printage();
   getch();
}