#include <cstring>
#include <iostream>
#include "stacktype.cpp"
using namespace std;

int main()
{
    StackType <char> x;
    string s = "(())()()()";
    char p[50];
    strcpy(p,s.c_str());
    bool bal=true;
    for(int i=0;i<s.length();i++)
        {
            if(p[i]=='(')
                x.Push(p[i]);
            try{
                if(p[i]==')')
                    x.Pop();
            }
            catch (EmptyStack e){

            cout << "OK" <<endl;
            }
        }
    if(x.IsEmpty())
        cout << "Balanced ";
    else
        cout << "Not Balanced ";

}

