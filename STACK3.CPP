#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class stack {
 int stk[5];
 int top;
public:
 stack()
 {
top = -1;
 }
 void push(int x)
 {
if (top >= 4) {
 cout << "stack overflow";
 return;
}
top=top+1;
stk[top] = x;
cout << "inserted " << x;
 }
  void display();
  void stack::display()
 {
if (top < 0) {
 cout << " stack empty"; return; 
 } 
for (int i = top; i >= 0; i--)
 cout << stk[i] << " ";
 }
 void main()
{ clrscr();
 int ch;
 stack st;
 while (1)
{
 cout << "\n1.push 2.pop 3.display 4.peep 5.change 6.exit\nenter ur choice: "; 
cin >> ch;
switch (ch)
 {
case 1:
 cout << "enter the element: "; cin >> ch;
 st.push(ch);
 break;
 case 3:
 st.display();
 break;
 case 6:
 exit(0); }
getch();
 
}
}