#include<iostream.h>
#include<conio.h>
class base { 
public: 
    virtual void print() 
    { 
        cout << "print base class" << endl; 
    } 
  
    void show() 
    { 
        cout << "show base class" << endl; 
    } 
}; 
  
class derived : public base { 
public: 
    void print() 
    { 
        cout << "print derived class" << endl; 
    } 
  
    void show() 
    { 
        cout << "show derived class" << endl; 
    } 
}; 
  
int main() 
{ 
    clrscr();
	base* bptr; 
    derived d; 
    bptr = &d; 

  
    // virtual function, binded at runtime 
    bptr->print(); 
  
    // Non-virtual function, binded at compile time 
    bptr->show(); 
	getch();
} 
