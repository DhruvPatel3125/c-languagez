#include<iostream.h>
#include<conio.h>
void main()
{
   char country[6]={'i','n','d','i','a','\0'};
   clrscr();
   char *ptr=country;
   for(int i=0;i<6;i++)
   {
     cout<<*ptr;
     ptr++;
   }
   getch();
}