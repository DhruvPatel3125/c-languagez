#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
//program for circular queue
class cir
{
	int Q[size];
	int rear, front;
	public:
	cir()
	{
	    rear = -1;
	    front = -1;
	}
	void insert()
	{
	   int no;
	   if((front==0 && rear==size-1)||(front==rear+1))
	{
	cout<<"\n overflow";
	return;
	}
	     else if(front==-1)
	     {
		front=0;
		rear=0;
	     }
	     else if(rear==size-1)
	     {
		rear=0;
	     }
	   else
	    rear++;
	    cout<<"\n Enter element :";
	    cin>>no;
	    Q[rear]=no;
	}
	void del()
	{
	  if(front==-1)
	  {
	     cout<<"\n underflow ";
	     return;
	  }
	 cout<<"\n Element deleted:"<<Q[front];
	  if(front==rear)
	  {
	     front=-1;
	     rear=-1;
	  }
	  else
	  {
	    if(front==size-1)
		front=0;
	    else
		front++;
	  }
       }
       void print()
       {
	  int i;
	  if(front==-1)
	  {
	     cout<<"\n queue is empty ";
	     return;
	  }
	  if(front<=rear)
	  {
	     for(i=front;i<=rear;i++)
	     cout<<"\n"<<Q[i];
	  }
	  else
	  {
	    for(i=front;i<size;i++)
	    cout<<"\n"<<Q[i];
	    for(i=0;i<=rear;i++)
	    cout<<"\n"<<Q[i];
	  }
       }
};
void main()
{
	clrscr();
	int ch;
	cir qu;
	while (1)
	{
	cout << "\n1.insert 2.delet 3.display 4.exit\nenter ur choice: ";
	cin >> ch;
	switch (ch) {
	case 1:
	   qu.insert();
	   break;
	case 2:
	   qu.del();
	   break;
	case 3:
	   qu.print();
	   break;
	case 4:
	   exit(0);
      }
   }
   getch();
}

