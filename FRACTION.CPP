/*#include<iostream.h>
#include<conio.h>
// GCD function
int findGCD(int n1, int n2)//greatest common divisor
{
    int gcd;
    for(int i=1; i <= n1 && i <= n2; i++)
    {
	if(n1%i==0 && n2%i==0)
	    gcd = i;
    }
    return gcd;
}

// Main Program
void main()

{
clrscr();
    int num1,den1;

    //user input first fraction
    cout << "Enter numerator and denominator of first number : "; cin >> num1 >> den1;

    int num2,den2;

    //user input second fraction
    cout << "Enter numerator and denominator of second number: "; cin >> num2 >> den2;

    //finding lcm of the denominators
    int lcm = (den1*den2)/findGCD(den1,den2);

    //finding the sum of the numbers
    int sum=(num1*lcm/den1) + (num2*lcm/den2);

    //normalizing numerator and denominator of result
    int num3=sum/findGCD(sum,lcm);

    lcm=lcm/findGCD(sum,lcm); //least common multiple

    //printing output
    cout<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<num3<<"/"<<lcm;

//    return 0;
getch();
}
//#include<stdio.h>
/*#include<conio.h>
#include<iostream.h>
int frac(int,int,int,int);
void main()
{
clrscr();
int a,b,c,d;
cout<<"Enter fraction numbers"<<endl;
cin>> a>> b>> c>> d;
frac(a,b,c,d);

getch();
}
int frac(int a, int b, int c, int d)
{
int e,f;
e= (a*d + c*b);
f=d*b;
cout<<e<<'/'<<f;
return(e,f);
}             */
#include <iostream.h>
#include<conio.h>



class Fraction {
    private:
    int num;
    int den;

    public:
    Fraction(int a, int b) {
        num = a;
        den = b;
    }

    void simplify() {
        int gcd = 1;
        for(int i=0; i<=min(num, den); i++) {
            if(num%i==0 && den%i==0) {
                gcd = i;
            }
        }
    }

    void print() {
        cout<<num<<"/"<<den<<endl;
    }

    void add(Fraction const &f2) {
        int lcm = den * f2.den;
        int x = lcm/den;
        int y = lcm/f2.den;

        int n = x*num + (y*f2.num);

        num = n;
        den = lcm;

        simplify();
    }

    void multiply(Fraction const &f2) {
        num = num*f2.num;
        den = den*f2.den;

        simplify();
    }
};



int main() {

    Fraction f1(2,3);
    Fraction f2(3,5);

    //f1.print();
    //f2.print();

    f1.add(f2);

    f1.print();
    f2.print();

    f1.multiply(f2);

    f1.print();
    f2.print();
    return 0;

}