/*#include<iostream.h>
#include<conio.h>
int factorial(int n);

int factorial(int n) {
 if(n==0)
 return 1;
 else
 return n * factorial(n - 1);
}
void main()
{
clrscr();
 int n;
 cout << "Enter a positive integer: ";
 cin >> n;
 cout << "Factorial of " << n << " = " << factorial(n);
 getch();
}*/

// A C++ program to demonstrate working of
// recursion
#include <iostream.h>
#include<conio.h>

void printFun(int test)
{
    if (test < 1)
	return;
    else {
	cout << test << "";
	printFun(test - 1); // statement 2
	cout<<"\n";
	cout << test<<" " ;
	return;
    }
}

void main()
{
clrscr();
    int test = 5;
    printFun(test);
    getch();
}

// C++ Program to calculate the sum of first N natural
// numbers using recursion
/*#include <iostream.h>
#include<conio.h>

int nSum(int n)
{
    // base condition to terminate the recursion when N = 0
    if (n == 0) {
	return 0;
    }

    // recursive case / recursive call
    int res = n + nSum(n - 1);

    return res;
}

void main()
{
clrscr();
    int n = 5;

    // calling the function
    int sum = nSum(n);

    cout << "Sum = " << sum;
    getch();
}
  */