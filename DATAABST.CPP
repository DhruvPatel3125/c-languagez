// C++ Program to Demonstrate the 
// working of Abstraction 
#include <iostream.h> 
#include<conio.h> 
 
class implementAbstraction { 
private: 
 int a, b; 
 
public: 
 // method to set values of 
 // private members 
 void set(int x, int y) 
 { 
 a = x; 
 b = y; 
 } 
 
 void display() 
 { 
 cout << "a = " << a << endl; 
 cout << "b = " << b << endl; 
 } 
}; 
int main() 
{ 
 clrscr(); 
 implementAbstraction obj; 
 obj.set(10, 20); 
 obj.display(); 
 getch(); 
 return 0; 
}