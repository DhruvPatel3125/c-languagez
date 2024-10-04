#include<iostream.h>
#include<conio.h>

class complex
{
	int real;
	int image;
	public:
	complex()	
	{
		real=0;
		image=0;
	}
	   complex(int r,int i)
	   {
		real = r;
		image=i;

	   }

	   complex operator+(complex c)
	   {
		complex c3;
		c3.real=real+c.real;
		c3.image=image+c.image;
		return c3;

	   }
	   void display()
	   {
	       cout<<"\n real= "<<real;
	       cout<<"\n image = "<<image;
	   }
};
int main()
{
	clrscr();
	complex c1(10,20);
	complex c2(30,40);
	complex c3;
	c3=c1+c2;
	c1.display();
	c2.display();
	c3.display();
	getch();
}