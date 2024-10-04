#include<iostream.h>
#include<conio.h>
#include<process.h>
int a[5],top=-1,max=5;
class StackOperation
{
 public:
 void push();
 void pop();
 void peep();
 void update();
 void display();
};
void StackOperation::push()
{
 if(top==max-1)
 {
 cout<<"\nStack is Overflow";
 }
 else
 {
 cout<<"\n Enter element for Push:";
 cin>>a[++top];
 }
 display();
}
void StackOperation::pop()
{
if(top==-1)
{
cout<<"Stack is underflow";
}
else
{
cout<<"\n Your Poped element is: "<<a[top--];
}
display();
}
void StackOperation::peep()
{
int n;
cout<<"\nEnter the position which you want to get:";
cin>>n;
if(top<n-1)
{
cout<<"\n sorry!! Element does not exit";
}
else
{
 cout<<"\n Your Peeped element is: "<<a[n-1];
}
display();
}
void StackOperation::update()
{
int p,v;
cout<<"\nEnter the position which you want to update:";
cin>>p;
if(top<p-1)
{
cout<<"\n sorry!! Element does not exit";
}
else
{
cout<<"\nEnter the value:";
cin>>v;
 a[p-1]=v;
 }
display();
}
void StackOperation::display()
{
int i;
 if(top==-1)
 {
 cout<<"\n Stack is Empty";
 }
 else
 {
 for(i=0;i<=top;i++)
 {
 cout<<"\n "<<a[i];
 }
 }
}
void main()
{
int ch,n;
StackOperation s1;
do
{
clrscr();
cout<<"\n===========================";
cout<<"\n Stack Operation ";
cout<<"\n===========================";
cout<<"\n 1. PUSH\n 2. POP\n 3. Peep \n 4. Update\n 5. Display \n 6. Exit";
cout<<"\nEnter Your Choice:";
cin>>ch;
switch(ch)
{
 case 1:s1.push();break;
 case 2:s1.pop();break;
 case 3:s1.peep();break;
 case 4:s1.update();break;
 case 5:s1.display();break;
 case 6:exit(0); break;
 default:cout<<"You Have Wrong Choice";
}
 cout<<"\n Do you want to continue (1-Yes 0-No):";
 cin>>n;
}while(n!=0);
getch();
}