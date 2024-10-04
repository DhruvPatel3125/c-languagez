#include<iostream.h>
#include<conio.h>
class Addition
{
private:
 int a,b;
public:
void add()
{
cout<<"Enter a:";
cin>>a;
cout<<"\nEnter b:";
cin>>b;
cout<<"\nAddition:"<<a+b;
}
};
void main(){
clrscr();
Addition a1;
a1.add();
getch();
}