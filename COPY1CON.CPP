// copyconstructor
#include <iostream.h>
#include<conio.h>

class Sample {
	int id;

public:
	// parameterized constructor
	Sample(int x) { id = x; }
	void display() { cout << "ID=" << id; }
};

void main()
{
	clrscr();
Sample obj1(10);
  //	obj1.display();
   //	cout << endl;

	// creating an object of type Sample from the obj
	Sample obj2(obj1); // or obj2=obj1;
	obj2.display();
	getch();
}
