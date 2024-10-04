//function overloading:-function name same but argument different
#include <iostream.h>    
#include<conio.h>
class sum
{
public:
 void addition(int x, int y)
 {
 cout<<x+y<<endl;
 }
 void addition(int x, double y)
 {
 cout<<x+y<<endl;
 }
 void addition(int x, int y, int z)
 {
 cout<<x+y+z<<endl;
 }
};
void main()
{
	clrscr();
 sum s1;
 s1.addition(10,20.50);
 s1.addition(10,15);
 s1.addition(10,5,7);
 getch();
}