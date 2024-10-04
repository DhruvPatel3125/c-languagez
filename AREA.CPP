// C++ program to demonstrate how we will calculate
// the area of shapes USING VIRTUAL FUNCTION

#include <iostream.h>
#include<conio.h>


// Declaration of Base class
class Shape {
public:
	void virtual calculate()
	{
		cout << "Area of your Shape ";
	}

};

// Declaration of Derived class
class Rectangle : public Shape {
public:
	int width, height, area;

	void calculate()
	{
		cout << "Enter Width of Rectangle: ";
		cin >> width;

		cout << "Enter Height of Rectangle: ";
		cin >> height;

		area = height * width;
		cout << "Area of Rectangle: " << area << "\n";
	}


};

// Declaration of 2nd derived class
class Square : public Shape {
public:
	int side, area;

	void calculate()
	{
		cout << "Enter one side your of Square: ";
		cin >> side;

		area = side * side;
		cout << "Area of Square: " << area << "\n";
	}

};

int main()
{

	// base class pointer
    Shape* S;
	Rectangle r;


	// initialization of reference variable
    S = &r;

	// calling of Rectangle function
	S->calculate();
	Square sq;

	// initialization of reference variable
	S = &sq;

	// calling of Square function
	S->calculate();

       getch();
}
