#include <iostream.h>
#include<conio.h>

/*class Test {
public:
	Test() { cout << "\n Constructor executed"; }

	~Test() { cout << "\n Destructor executed"; }
};
void main()
{
	clrscr();
	Test t;

	getch();
}*/
// C++ Program to count the number of objects created and
// destroyed

// global variable to count
int count = 0;

// class definition
class Test {
public:
	Test()
	{
		count++;
		cout << "No. of Object created: " << count << endl;
	}

	~Test()
	{
		cout << "No. of Object destroyed: " << count
			<< endl;
		--count;
	}
};

// driver code
 void  main()
{
	clrscr()
	Test t, t1, t2, t3;
	getch();
}

