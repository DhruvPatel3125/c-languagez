// Infix To Postfix Expression...

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class infixtopostfix
{
    char inf[50],p[50],s[50];
    int i,j,top;
    int pre(char value);

    public:
    infixtopostfix()
    {
        top = -1;
        j = 0;
        p[j] = '\0';
    }

    void getexp();
    void infixToPostfix();
    void postfix();
};

int infixtopostfix :: pre(char value)
{
    switch (value)
    {
    case '^' : return 3;
    case '/' :
    case '*' : return 2;
    case '+' :
    case '-' : return 1;
    }
    return 0;
}

void infixtopostfix :: getexp()
{
    cout<<"\nEnter Expression : ";
    cin>>inf;
}

void infixtopostfix :: infixToPostfix()
{
    cout<<"\nInfix To Postfix Expression : "<<p;
}

void infixtopostfix :: postfix()
{
    for(i=0; i<strlen(inf); i++)
    {
        switch (inf[i])
        {
        case '(' :
            s[++top] = '(';
            break;

        case ')' :
            j = strlen(p);
            while(s[top] != '(')
            {
                p[j++] = s[top--];
            }
            top--;
            p[j] = '\0';
            break;

        case '+' :
        case '-' :
        case '*' :
        case '/' :
        case '^' :
            if(top >= 0 && s[top] != '(')
            {
                j = strlen(p);
                while (top >=0 && s[top] != '(' && pre(s[top]) >= pre(inf[i]))
                {
                    p[j++] = s[top--];
                }
                p[j] = '\0';
            }
            s[++top] = inf[i];
            break;

        default : 
            j = strlen(p);
            p[j++] = inf[i];
            p[j] = '\0';
        }
    }
    j = strlen(p);
    while(top >= 0)
    {
        p[j++] = s[top--];
    }
    p[j] = '\0';
}

int main()
{
    infixtopostfix e;

    e.getexp();
    e.postfix();
    e.infixToPostfix();

    return 0;
}
