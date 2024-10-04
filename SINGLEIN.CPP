    #include <iostream>  
#include<conio.h>
     class Animal {  
       public:  
     void eat() {   
        cout<<"Eating..."<<endl;   
     }    
       };  
       class Dog: public Animal    
       {    
           public:  
         void bark(){  
        cout<<"Barking...";   
         }    
       };   
    void main() {  
        clrscr();
		Dog d1;  
        d1.eat();  
        d1.bark();  
        getch();  
    }  