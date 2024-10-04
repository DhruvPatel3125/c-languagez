#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class stack
	{
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
	void pop()
	{
	   if (top < 0) {
		cout << "stack underflow";
	   return;
	}
	cout << "deleted " << stk[top--];
	}
	void display()
	{
	   if (top < 0) {
	   cout << " stack empty"; return;
	}
	for (int i = top; i >= 0; i--)
	    cout << stk[i] << " ";
	}
	void peep()
	{ int i;
	  cout<<"enter the position";
	  cin>>i;
	    if (top < 0) {
		cout << " stack empty"; return; }
		cout<<stk[top-i+1];
	}
	void change()
	{ int i,item;
	 //cout<<"\n value of top is "<<top;
	   cout<<"\n enter the position to enter";
	   cin>>i;
	   cout<<"\n Enter the item to be insert :";
	   cin>>item;
		if (top < 0) {
		cout << " stack empty"; return; }
		stk[top-i+1]=item;
		cout<<"element insert in the given position";
		}

};
void main()
{ clrscr();
 int ch;
 stack st;
 while (1)
{
 cout << "\n=====\n1.push \n2.pop \n3.display \n4.peep \n5.change \n6.exit\n =====\nenter ur choice: ";
cin >> ch;
switch (ch)
 {
case 1:
 cout << "enter the element: "; cin >> ch;
 st.push(ch);
 break;
case 2:
 st.pop();
 break;
case 3:
 st.display();
 break;
case 4:
st.peep();
 break;
case 5:
st.change();
 break;
case 6:
 exit(0); }
getch();

}
}