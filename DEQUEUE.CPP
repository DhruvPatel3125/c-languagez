//Write a program for Dequeue
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#define max 5
class deq
{
	int deque_arr[max];
	int front;
	int rear;
	public:
	deq()
	{
	   front=-1;
	   rear=-1;
	}
	void insert_frontend(int item);
	void insert_rearend(int item);
	int delete_frontend();
	int delete_rearend();
	void display();
};
void deq::insert_frontend(int item)
{
	if (((front==0) && (rear==max-1)) || (front==rear+1) )
	{
	   cout<<"\nqueue overflow\n";
	   return;
	}
	   else if( front==-1 )/*if queue is initially empty*/
	   {
	     front=0;
	     rear=0;
	   }
	   else if(front==0)
	     front=max-1;
	else
	front=front-1;
	deque_arr[front]=item ;
}/*end of insert_frontend()*/
void deq::insert_rearend(int item)
{
	if (((front==0) && (rear==max-1)) || (front==rear+1) )
	{
	   cout<<"\nqueue overflow\n";
	   return;
	}
	   else if(rear==-1) /*if queue is initially empty*/
	   {
	     front=0;
	     rear=0;
	   }
	   else if(rear==max-1) /*rear is at last position of queue */
	     rear=0;
	else
	rear=rear+1;
	deque_arr[rear]=item ;
}/*end of insert_rearend()*/
int deq::delete_frontend()
{
	int item;
	if( front == -1)
	{
	  cout<<"\nqueue underflow\n";
	 // exit(0);
	}
	item=deque_arr[front];
	if(front==rear) /*queue has only one element */
	{
	  front=-1;
	  rear=-1;
	}
	else
	if(front==max-1)
	front=0;
	else
	front=front+1;
	return item;
}/*end of delete_frontend()*/
int deq::delete_rearend()
{
	int item;
	if( front == -1)
	{
	   cout<<"\nqueue underflow\n";
	   //exit(0);
	}
	item=deque_arr[rear];
	if(front==rear) /*queue has only one element*/
	{
	  front=-1;
	  rear=-1;
	}
	  else if(rear==0)
	  rear=max-1;
	else
	 rear=rear-1;
	return item;
}/*end of delete_rearend() */
void deq::display()
{
	int i;
	if( front == -1)
	{
	   cout<<"\nqueue underflow\n";
	  //exit(1);
	   return;
	}
	cout<<"\nqueue elements :\n";
	i=front;
	if( front<=rear )
	{
	while(i<=rear)
	  cout<<" "<<deque_arr[i++];
	}
	else
	{
	while(i<=max-1)
	  cout<<" "<<deque_arr[i++];
	  i=0;
	while(i<=rear)
	  cout<<" "<<deque_arr[i++];
	}
	cout<<"\n";
}/*end of display() */
void main()
{
	clrscr();
	deq q1;
	int choice,item;
	while(1)
	{
	  cout<<"\n\n1.insert at the front \n";
	  cout<<"2.insert at the rear \n";
	  cout<<"3.delete from front \n";
	  cout<<"4.delete from rear \n";
	  cout<<"5.display\n";
	  cout<<"6.quit\n";
	  cout<<"\nenter your choice : ";
	  cin>>choice;
	  switch(choice)
	  {
	    case 1:
	      cout<<"\ninput the element for adding in queue : ";
	      cin>>item;
	      q1.insert_frontend(item);
	      break;
	    case 2:
	      cout<<"\ninput the element for adding in queue : ";
	      cin>>item;
	      q1.insert_rearend(item);
	      break;
	    case 3:
	      cout<<"\nelement deleted from front end is:\n"<<q1.delete_frontend();
	      break;
	    case 4:
	      cout<<"\nelement deleted from rear end is :\n"<<q1.delete_rearend();
	      break;
	    case 5:
	      q1.display();
	      break;
	    case 6:
	      exit(0);
	    default:
		cout<<"\nwrong choice\n";
	}/*end of switch*/
	q1.display();
	}/*end of while*/
	getch();
}/*end of main()*/