#include <iostream.h>
#include<string.h>
#include<conio.h>

class media
{
    protected:
    char title[100];
    float price;

    public:
    media()
    {

	price=0.0;

	}
	media(char *t,float P)
	{
	    strcpy(title,t);
	    price=P;

	    }
virtual void display()=0;
    };
    class book : public media
    {
	int P_count;
	public:
	book()
	{
	    P_count=0;

	}
	book(char *t,float P,int pc):media(t,P)
	{

	    P_count=pc;

	}

     void display()
     {

	  cout<<"title :"<<title<<endl;
		cout<<"Price: "<<price<<endl;

	  cout<<"Pagecount :"<<P_count<<endl;

	}

    };


 class CD : public media
    {
	float time;
	public:
	CD()
	{
	    time=0.0;

	}
	CD(char *t,float p,float tim):media(t,p)
	{

	    time=tim;

	}

     void display()
     {
	 cout<<"title :"<<title<<endl;
		cout<<"Price: "<<price<<endl;

	  cout<<"time in minutes :"<<time<<endl;

	}

    };
int main()
{
	clrscr();
	media *m;


    cout<<endl<<"Book information"<<endl;
    book Bo("programming in java",1000,500);
	m=&Bo;
	m->display();

    cout<<endl<<"video information"<<endl;
    CD cd("programming in c++",100,125);
    m=&cd;
    m->display();
    getch();
    }
 