// Program to overload + and = operators for string data.

#include<iostream.h>
#include <conio.h>
#include<string.h>

class string
{
	char str[100];


   public :
	void read();		// for reading string
	void print();		// for printing string
    // for overloading addition operator to joint two string
	string operator + (string);
   // for overloading equal to operator for equality of two string
	void operator >= (string);
};

    // Function to read the string
void string :: read()
{
    cout << "Enter your string : " ;
    cin >> str;
}
   // Function to print the string
void string :: print()
{
    cout << "Your string is " << str << endl ;
}
  // Function definition for overloading + operator
/*string string :: operator+(string s)
{
    string t;

    strcpy(t.str,str);
    strcat(t.str,s.str);
	u
    return(t);
}*/
   // Definition for equal to operator
int string :: operator >= (string s)
{
    if (strlen(str)>=strlen(s.str))
	//	cout<<str <<"is Greater then"<<s.str<<endl;
	return 1;
    else
		//cout<<s.str<<"Is Greater then "<<str<<endl;
		return 0;
}
int string :: operator == (string s)
{
    if (strcmp(str,s.str)==0)
	
	return 1;
    else
	
		return 0;
}
int string :: operator >= (string s)
{
    if (strlen(str)>=strlen(s.str))
	
	return 1;
    else
		
		return 0;
}
void main()
{
    clrscr();

    string s1,s2,s3;
    s1.read();
    s2.read();
	
    // = s1 + s2 ;  // call operator fucntion to join two strings.

   if(s1 == s2)   // call operator function to compare two strings.
	cout << "Both strings are same" <<endl ;
    else if(s1>=s2)
	cout << "s1 is greater" <<endl ;
    else 
    cout<<"s2 is small"<<endl;
	
    //.print();    // print string after joining.
	
    getch();
}