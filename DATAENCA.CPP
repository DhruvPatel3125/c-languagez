#include <iostream.h> 
#include<conio.h> 
class temp{ 
 int a; 
 int b; 
 public: 
 int solve(int input){
 a=input; 
 b=a/2; 
 return b; 
 } 
}; 
int main() { 
 clrscr(); 
 int n;
 cout<<"enter no:-";
 cin>>n;
 temp half;
 int ans=half.solve(n);
 cout<<"answer:-"<<ans<<endl;
 getch(); 
 return 0; 
} 