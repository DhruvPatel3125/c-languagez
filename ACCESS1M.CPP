//access modifier public program
#include <iostream.h>
#include<conio.h>
// define a class
class Sample {
    // public elements
   public:
    int age;
    void displayAge() {
        cout << "Age = " << age << endl;
    }
};
void main() {
clrscr();
    // declare a class object
    Sample obj1;

    cout << "Enter your age: ";

    // store input in age of the obj1 object
    cin >> obj1.age;

    // call class function
    obj1.displayAge();

    getch();
}

