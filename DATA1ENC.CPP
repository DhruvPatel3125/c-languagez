#include<iostream.h>
#include<conio.h>
class Encapsulation {
private:
 int x; // Data hidden from outside world
public:
 void set(int a) // Function to set value of variable x
 { 
x = a; 
 }
 int get() // Function to return value of variable x
 { 
return x; 
 }
};
void main()
{
	clrscr();
 Encapsulation obj;
 obj.set(5);
cout << obj.get();
 getch() ;
}
