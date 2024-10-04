#include <iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 // Defining enum Color
 enum color {red,green,yellow,pink,white,black};

 // Creating Color type Object
 color c1=red;
 color c2=black;
 color c3=red;
 color c4=black;
 cout<<"\n c1 is :"<<c1;
 cout<<"\n c2 is :"<<c2;
 cout<<"\n c3 is :"<<c3;
 cout<<"\n c4 is :"<<c4;
getch();
}