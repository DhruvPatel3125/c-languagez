#include<iostream.h>
#include<conio.h>

class exmple {
int j, k;
public:
exmple (int m, int n) {
j = m;
k = n;
cout << "In this parameterised Constructor\n";
//}
//void Display () {
cout << "Values:" << j << "\t" << k;
}
};
void main () {
exmple Obj (30, 40);
//Obj.Display();
getch ();
}