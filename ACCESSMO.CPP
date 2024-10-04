#include <iostream.h>
#include<conio.h>

class MyClass {

  private:   // Private access specifier
   int y;   // Private attribute
    public:    // Public access specifier
    int x;   // Public attribute

    void show()
    {
       cout<<x;
    }
};
void main() {
	clrscr();
  MyClass myObj;
  myObj.x = 25;  // Allowed (x is public)
//  myObj.y = 50;  // Not allowed (y is private)
  myObj.show();
  getch();
}
