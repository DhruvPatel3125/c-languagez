#include<conio.h>
#include<iostream.h>
#include<process.h>
int a[5],front=-1,rear=-1,max=5;
class QueueOperation
{
 public:
 void push();
 void pop();
 void display();
};
void QueueOperation::push()
{
 if(rear==max-1)
 {
 cout<<"\nQueue is Overflow";
 }
 else
 {
 cout<<"\n Enter element for Push:";
 cin>>a[++rear];
 if(front==-1)
 {
 front=0;
 }
 }
 display();
}
void QueueOperation::pop()
{
if(front==-1)
{
cout<<"Queue is underflow";
}
else
{
 cout<<"\n Your Poped element is:"<<a[front];
 }
 if (front==rear)
 {
 front=-1;
 rear=-1;
 }
 else
 front++;
}
void QueueOperation::display()
{
 int i;
 if(front==-1 || rear==-1)
 {
 cout<<"\n Queue is Empty";
 }
 else
 {
 for(i=front;i<=rear;i++)
 {
 cout<<"\n"<<a[i];
 }
 }
}
void main()
{
int ch,n;
do
{
clrscr();
QueueOperation q1;
cout<<"\n===========================";
cout<<"\n Queue Operation ";
cout<<"\n===========================";
cout<<"\n 1. PUSH\n 2. POP\n 3. Display\n 4. Exit ";
cout<<"\nEnter Your Choice:";
cin>>ch;
switch(ch)
{
 case 1:q1.push();break;
 case 2:q1.pop();break;
 case 3:q1.display(); break;
 case 4:exit(0); break;
 default:cout<<"You Have Wrong Choice";
}
 cout<<"\n Do you want to continue (1-Yes 0-No):";
 cin>>n;
}while(n!=0);
getch();
}
