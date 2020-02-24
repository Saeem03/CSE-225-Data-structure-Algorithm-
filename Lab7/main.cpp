#include <iostream>
#include "quetype.cpp"
using namespace std;

int main()
{
    QueType <int> x(5),y;
    cout <<"List is Empty ?? " << x.IsEmpty() << endl;;
    int temp;
    cout << "Enter Four Numbers : ";
    for(int i=0;i<4;i++)
    {
    cin>>temp;
    x.Enqueue(temp);
    }
    cout << "List is Empty ?? " <<endl;
    if( x.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;    cout << "List is full ?? "<< endl;
    if(x.IsFull())
        cout <<"Queue is  Full "<< endl;
    else
        cout <<"Queue is not Full "<< endl;
    cout << "Enter another Integer Number :";
    cin>>temp;
    x.Enqueue(temp);
       cout << "List is full ?? "<< endl;
    if(x.IsFull())
        cout <<"Queue is  Full "<< endl;
    else
        cout <<"Queue is not Full "<< endl;
    cout << " Queue is being printing :"<<endl;
     for(int i=0;!x.IsEmpty();i++)
    {
        x.Dequeue(temp);
        cout << temp << " ";
        y.Enqueue(temp);

    }
    cout << endl;
     for(int i=0;!y.IsEmpty();i++)
     {
        y.Dequeue(temp);
        x.Enqueue(temp);
     }

    try{
    cin>>temp;
    x.Enqueue(temp);
    }
    catch(FullQueue e)
    {
        cout << "Queue is OverFlow" << endl;
    }
    cout << "Dequeuing two times... "<< endl;
     cout << "Dequeuing..  " << temp << endl;    x.Dequeue(temp);
     cout << "Dequeuing..  " << temp << endl;
    x.Dequeue(temp);
    cout << " Queue is being printing :"<<endl;
    for(int i=0;!x.IsEmpty();i++)
    {
        x.Dequeue(temp);
        cout << temp << " ";
        y.Enqueue(temp);
    }
    cout << endl;
         for(int i=0;!y.IsEmpty();i++)
     {
        y.Dequeue(temp);
        x.Enqueue(temp);
     }
    cout << "Dequeuing three times...  "<< endl;
     cout << "Dequeuing..  " << temp << endl;
     x.Dequeue(temp);
     cout << "Dequeuing..  " << temp << endl;
     x.Dequeue(temp);
     cout << "Dequeuing..  " << temp << endl;
     x.Dequeue(temp);
   cout << "List is Empty ?? " <<endl;
    if( x.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;
    cout << " Trying to Dequeue for one time again ..."<< endl;
    try
    {
    x.Dequeue(temp);
    }
    catch(EmptyQueue e)
    {
        cout << "Queue UnderFlow" << endl;
    }
    QueType<string> qt;
    int n;
    string tempStr;
    cout << "Enter the integer number to convert it into binary :";
    cin >> n;

    qt.Enqueue("1");
    while(n--){
        qt.Dequeue(tempStr);
        string s1 = tempStr;
        cout << s1 << endl;
        string s2 = s1;
        qt.Enqueue(s1.append("0"));
        qt.Enqueue(s2.append("1"));
}
}
