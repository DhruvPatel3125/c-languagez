#include<iostream.h>
#include<conio.h>
//using namespace std;
class bank
{
 float amt,rate,year;
 float si; //Simple interest
 float NetAmt;
public:
 void read ()
 {
 cout <<" Enter Principle Amount :: ";
 cin>>amt ;
 cout<<"\n Enter Rate of Interest :: ";
 cin>>rate;
 cout <<"\n Enter Number of years :: ";
 cin>>year;
 si= (amt * rate * year) /100;
 NetAmt = si + amt;
 }
 void show()
 {
 cout <<"\n\n Interest : "<<si;
 cout <<"\n\n Total Amount : "<<NetAmt<<"\n";
 }
};
void main ()
{
clrscr();
 bank b;
 b.read();
 b.show();
 getch();
}
