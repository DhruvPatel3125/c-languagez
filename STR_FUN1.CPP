#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	string str1="HELLO";
	string str2="world";
	string str3;
	int len;
	clrscr();
	//copy string
	str3=str1;
	cout<<"str3:"<<str3<<endl;
	//concatenates str1 and str2
	str3=str1+str2;
	cout<<"str1+str2:"<<str3<<endl;
	//total length of str1 after concatinate
	len=str3.size();
	cout<<"str3.size():"<<len<<endl;
	getch();
}
