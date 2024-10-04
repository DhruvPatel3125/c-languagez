#include<iostream.h>
#include<conio.h>
class student
{
public:
   int rno;
   char name[5];
   void show()
   {
      cout<<"your name:-"<<name;
      cout<<"your rollno:-"<<rno;
   }
};
void main()
{
	student ob;
	ob.rno=30;
	ob.name="abc";
	ob.show();
	getch();
}