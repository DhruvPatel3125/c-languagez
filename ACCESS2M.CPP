//access modifier public,private
#include <iostream.h>
#include<conio.h>

// define a class
class Sample {

    // private elements
   private:
    int age;

    // public elements
   public:
    void displayAge(int a) {
        age = a;
        cout << "Age = " << age << endl;
    }
};

void main() {
clrscr();
    int ageInput;

    // declare an object
    Sample obj1;

    cout << "Enter your age: ";
    cin >> ageInput;
     //cin>>obj1.age; //error
    // call function and pass ageInput as argument
    obj1.displayAge(ageInput);

    getch();
}
