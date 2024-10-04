#include<iostream.h>
#include<conio.h>
void main()
{
//pointer:-data type which holds the address of other data types
clrscr();

   int a=3;
   int* b = & a;
   //b=&a;
   //&-->>(address of) operator
   cout<<"the address of a is"<<&a<<endl;
   cout<<"the addressbof a is"<<b<<endl;
   //*-->(value at) dereference operator
   cout<<"the value at address b is"<<*b<<endl;
   getch();

}