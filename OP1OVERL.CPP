#include <iostream>
#include<conio.h>
class Complex {
private:
 int x, y;
public:
Complex() {}
 Complex(int a, int b)
 {
 x = a;
 y = b;
}
 Complex operator+(Complex obj)
 {
 Complex res;
 res.x = x + obj.x;
 res.y = y + obj.y;
 return res;
}
 Complex operator*(Complex obj)
 {
 Complex res;
 res.x = x * obj.x;
 res.y = y * obj.y;
 return res;
 }
 void print() 
{ 
cout <<"X = "<< x <<endl<<"Y = "<< y << endl;
}
};
int main()
{
 Complex c1(10, 5);
Complex c2(2, 4);
 // An example call to "operator+"
 Complex c3 = c1 + c2;
 c3.print();
c3 = c1 * c2;
c3.print();
}
