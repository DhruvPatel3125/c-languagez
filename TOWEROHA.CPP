#include <iostream.h>
#include<conio.h>
void hanoi(int n, char from, char to, char via) {
   if(n == 1){
      cout<<"Move disk 1 from "<<from<<" to "<<to<<endl;
   }
   else{
      hanoi(n-1, from, via, to);
      cout<<"Move disk "<<n<<" from "<<from<<" to "<<to<<endl;
      hanoi(n-1, via, to, from);
   }
}
void main() {
	clrscr();
   int n = 3;
   char from = 'A';
   char to = 'B';
   char via = 'C';
   //calling hanoi() method
   hanoi(n, from , via, to);
   getch();
}