#include<iostream.h>
#include<conio.h>
class add
{
     public:
     add(int a,int b)
     {
	int c=a+b;
	cout<<"sum="<<c;
     }
};
void main()
{
    clrscr();
    add ob(10,20);
    getch();
}