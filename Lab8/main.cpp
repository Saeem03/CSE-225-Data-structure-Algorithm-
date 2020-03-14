#include <iostream>
#include "stacktype.cpp"
using namespace std;
bool  hasFirstBracket(StackType<char>);
bool IsOperand(char c)
{
    return (c>='0' && c<='9');
}
bool Isoperator(char c)
{
    return (c=='+' || c=='-' || c=='*' || c=='/');
}
int Presidence(char c)
{
    if(c=='+' || c== '-')
        return 1;
    else if(c=='*')
        return 2;
    else if ( c=='/')
        return 2;
    else
        return 0;
}
bool IsHigherPresidence(char c1,char c2)
{
    return (Presidence(c1) > Presidence(c2));
}
int main()
{
    for(int i=0;i<5;i++)
    {
    StackType<char> postfix,operators;
    string s;

//    "(4+8)*(6-5)/((3-2)*(2+2))";
    cout << "Enter your statement :";
    cin>>s;
    bool valid=true;
    int len=s.length();
    char c1,c2;
    char tempchar;
    for(int i=0; i<=len; i++)
        {
            c1=s[i-1];
            c2=s[i];
            if(c2=='(' || c2==')')
                {
                    if(c2=='(')
                        {
                            operators.Push(c2);
                        }
                    else if(operators.IsEmpty() && c2==')')
                        {

                            cout << "Bracket Error  : " << operators.Top()<< endl;
                            valid =false;
                        }

                    else
                        {
                            bool bracketFound;
                            while(!operators.IsEmpty())
                                {
                                    if(operators.Top()=='(')
                                        {
                                            operators.Pop();
                                            bracketFound=true;
                                            break;
                                        }
                                    tempchar=operators.Top();
                                    postfix.Push(tempchar);
                                    operators.Pop();
                                    bracketFound=false;
                                }
                            if(!bracketFound)
                                {
                                    cout <<"Last bracket Error" << endl;
                                    valid = false;

                                }

                        }
                }
            else if(IsOperand(c2))
            {
                if(IsOperand(c2) && IsOperand(c1))
                {
                    (c1-='0');
                    (c2-='0');
                    c1=c1*10;
                    c1+=c2;
                    postfix.Push(c1);
                    cout << "   " << c1<< endl;

                }
                else
                postfix.Push(c2);
            }
            else if (Isoperator(c2))
                {
                    if(Isoperator(c1) && Isoperator(c2)) // how to fix operator at the last or first position
                        {
                            cout << "operator together error." << endl;
                            valid = false;

                        }
                    else if(!(operators.IsEmpty() || IsHigherPresidence(c2,operators.Top())))
                        {
                            tempchar=operators.Top();
                            postfix.Push(tempchar);
                            operators.Pop();
                            operators.Push(c2);
                        }
                    else
                        {
                            operators.Push(c2);
                        }

                }
        }

    while(!operators.IsEmpty())
        {
            tempchar=operators.Top();
            if(tempchar=='(')
                {
                    valid=false;

                }
            postfix.Push(tempchar);
            operators.Pop();
        }
    string x="";

    StackType<char> xy;
    while(!postfix.IsEmpty())
        {
            tempchar = postfix.Top();
            xy.Push(tempchar);
            postfix.Pop();
        }
    while(!xy.IsEmpty())
        {
            tempchar = xy.Top();
            x+=tempchar;
            postfix.Push(tempchar);
            xy.Pop();
        }

    if(!valid)
        cout << "Invalid expression" << endl;
    else{

    cout << "PostFix  : "<< x << endl;

    StackType<double> lastDone;
    len = x.length();
    double a,b;
    for(int i=0;i<len;i++)
    {
        if(IsOperand(x[i]))
        {
            lastDone.Push(x[i]-'0');
        }
        else
        {
            double  a=lastDone.Top();
            lastDone.Pop();
            double b=lastDone.Top();
            lastDone.Pop();
           if(x[i]=='+')
            lastDone.Push(a+b);
           else if (x[i]=='-')
            lastDone.Push(b-a);
           if(x[i]=='*')
            lastDone.Push(a*b);
           else if (x[i]=='/')
            lastDone.Push(b/a);
        }
    }
    cout << lastDone.Top() << endl;
    }
    }
}
