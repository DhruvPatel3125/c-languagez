#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class queue
{
	int q1[5];
	int rear, front;
	public:
	queue()
	{
	   rear = -1;
	   front = -1;
	}
	void insert(int x)
	{
	    if (rear == 5)
	    {
	       cout << "\nqueue over flow";
	       rear=5;
	       return;
	    }
	    if(front==-1)
	    {
	       front=0;
	       rear=0;
	    }
	    q1[rear] = x;
	    rear++;
	}
	void delet()
	{
	    cout<<"\n value of front is \n"<<front<<":"<<rear;
	    if (front == -1) {
	    cout << "\nqueue under flow";
	    return;
	}
	else
	{
	   cout << "\ndeleted " << q1[front];
	}
	if(front==(rear-1))
	{
	   front=-1;
	   rear=-1;
	}
	else
	{
	   front++;
	}
       }
	void display();
};
	void queue::display()
	{
	   int i;
	   if (front==-1)
	   {
	      cout << "\n queue empty";
	      return;
	   }
	for (i = front ; i < rear; i++)
	cout << q1[i] << " ";
	}
int main()
{
	clrscr();
	int ch;
	queue qu;
	while (1)
	{
	    cout << "\n======\n1.insert\n2.delete\n3.display\n4.exit\n======\nenter ur choice: ";
	    cin >> ch;
	switch (ch)
	{
	   case 1:
	     cout << "\nenter the element: "; cin >> ch;
	     qu.insert(ch);
	     break;
	   case 2:
	     qu.delet();
	     break;
	   case 3:
	     qu.display();
	     break;
	   case 4:
	     exit(0);
	}
	}
	getch();
}
