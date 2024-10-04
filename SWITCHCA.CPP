/*// C++ program to returns day based on the numeric value.
// Program to build a simple calculator using switch Statement
#include <iostream.h>
#include<conio.h>

void main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    getch();
}*/

  /*  #include <iostream>  
    using namespace std;  
    int main () {  
           int num;  
           cout<<"Enter a number to check grade:";    
           cin>>num;  
               switch (num)    
              {    
                  case 10: cout<<"It is 10"; break;    
                  case 20: cout<<"It is 20"; break;    
                  case 30: cout<<"It is 30"; break;    
                  default: cout<<"Not 10, 20 or 30"; break;    
              }    
        }    */


	/*#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"\nEnter the Day's number :";
    cin>>day;
    switch (day)
    {
      case 1:
        cout<<"Monday";
        break;
      case 2:
        cout<<"Tuesday";
        break;
      case 3:
        cout<<"Wednesday";
        break;
      case 4:
        cout<<"Thursday";
        break;
      case 5:
        cout<<"Friday";
        break;
      case 6:
        cout<<"Saturday";
        break;
      case 7:
        cout<<"Sunday";
        break;
    }
    return 0;
}*/

#include <iostream.h>
#include <conio.h>

// Define a class named Calculator
class Calculator {
public:
    // Method to perform addition
    void add(int a, int b) {
        cout << "Sum: " << a + b << endl;
    }
    
    // Method to perform subtraction
    void subtract(int a, int b) {
        cout << "Difference: " << a - b << endl;
    }
    
    // Method to perform multiplication
    void multiply(int a, int b) {
        cout << "Product: " << a * b << endl;
    }
    
    // Method to perform division
    void divide(int a, int b) {
        if (b != 0)
            cout << "Quotient: " << a / b << endl;
        else
            cout << "Error: Division by zero" << endl;
    }
};

void main() {
    clrscr(); // Clear the screen

    // Create an object of Calculator
    Calculator calc;

    int choice, num1, num2;

    // Display menu options
    cout << "Calculator Menu:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Prompt for numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the operation based on user's choice
    switch (choice) {
        case 1:
            calc.add(num1, num2);
            break;
        case 2:
            calc.subtract(num1, num2);
            break;
        case 3:
            calc.multiply(num1, num2);
            break;
        case 4:
            calc.divide(num1, num2);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    getch(); // Wait for a key press
}

