#include<iostream.h>
#include<conio.h>
class max
{
     int a,b;
     public:
     void setdata()
     {
	cout<<"enter two nos:-";
	cin>>a>>b;
     }
     void getdata()
     {
	if(a>b)
	  cout<<"a is maximum"<<a;
	else
	  cout<<"b is maximum"<<b;
     }
};
void main()
{
  clrscr();
  max obj;
  obj.setdata();
  obj.getdata();
  getch();
}