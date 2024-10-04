#include<iostream.h>
#include<conio.h>
class stud
{
	public:
	int rno;
	char name[20];
	void getstud()
	{
		cout<<"enter rno"<<endl;
		cin>>rno;
		cout<<"name"<<endl;
		cin>>name;
	}
};
class result:public stud
{
	public:
	int m1,m2;
	float total,per;
	public:
	void getresult()
	{
		cout<<"marks1"<<endl;
		cin>>m1;
		cout<<"marks2"<<endl;
		cin>>m2;
		total=m1+m2;
		cout<<"total is"<<total<<endl;
		per=total/2;
		cout<<"your per is"<<per<<endl;
	}
};
void main()
{
	result r;
	clrscr();
	r.getstud();
	r.getresult();
	getch();
}





























