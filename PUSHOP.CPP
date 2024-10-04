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
    void pop()
    {
	if (top < 0) {
	    cout << "stack underflow";
		return;
	}
	
	   top--;
	cout << "deleted " << stk[top+1];
	
    }
	void peek();
	void display();
};   
void stack :: peek()
{
	int p;
	cout<<"\nEnter the element position that u want to peek";
	cin>>p;
	if (top < 0) {
			cout << " stack empty";
			return;
			}
	cout<<"\n Peek the elements ="<<stk[top-p+1];



}
void stack :: display()
    {
	if (top < 0) {
			cout << " stack empty";
			return;
			}
	for (int i = top; i >= 0; i--)
		cout << stk[i] << " ";

}
   
int main()
{
	clrscr();
	int ch;
	stack st;

	while (1)
	{
		cout << "\n1.push 2.pop 3.Peep 4.display 5.exit\nenter ur choice: ";
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
	    st.peek();
	    break;
		
	case 4:
	st.display();
	break;
	case 5:
	    exit(0);
	}
    }
}


