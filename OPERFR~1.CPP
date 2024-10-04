//operator overloaing minus(-)
#include <iostream.h>
  #include<conio.h>
class data
{
   private:
      int a;
      int b;
   public:
   void getdata()
   {
   cin>>a>>b;
   }
      // method to display Data
      void putdata()
      {
cout << "a: " << a << " b:" << b<<endl;
      }
      // overloaded minus (-) operator
    friend  void operator- (data &d1)
      {  	cout<<"\n";
	 d1.a = -d1.a;
	 d1.b = -d1.b;

      }
    friend void  operator+(data d3,data d4)
      { cout<<"\n";
      cout<<d3.a+d4.a<<"+";
      cout<<d3.b+d4.b;
      }

};
int main()
{   clrscr();
   data d1,d3,d4;
   d1.getdata();
   d3.getdata();
   d4.getdata();
   operator-(d1); //Unary call as friend function
   d1.putdata();
   operator+(d3,d4);
   getch();
   return 0;
}

 #include<iostream.h>
 #include<conio.h>
{
  private:
  int a;
  int b;
  public:
  void getdata(){
    cin>>a>>b;
  }
  void putdata(){
    cout<<"a:"<<a<<"b:"<<b<<endl;
  }

  friend void operator- (data &d1)
  {           
    d1.a = -d1.a;
    d1.b = -d1.b;
  }
  friend void operator+ (data d3,data d4){
    cout<<"\n";
    cout<<d3.a+d4.a<<"+";
    cout<<d3.b+d4.b;
  }
  
};

int main(){
  clrscr();
  data d1,d3,d4;
  d1.getdata();
  d2.getdata();
  d3.getdata();
  operator-(d1);
  d1.putdata();
  operator+(d3,d4);
  getch();
}