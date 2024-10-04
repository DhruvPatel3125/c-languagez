#include<iostream.h>
#include<conio.h>
void showinfo(int age)
{
   cout<<age<<endl;
}
void showinfo(char name[10])
{
   cout<<name<<endl;
}
void showinfo(double salary)
{
    cout<<salary<<endl;
}
void main()
{
    clrscr();
    showinfo(55);
    showinfo("abc");
    showinfo(11111);
    getch();

}