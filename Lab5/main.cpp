#include <iostream>
#include "Md_Saeem_Hossain_Shanto_1912218642.cpp"
#include "Md_Saeem_Hossain_Shanto_1912218642_timestamp.cpp"
using namespace std;

int main()
{
    bool found;
    int list_size,temp;
    SortedType <int> listo;
    cout << "length of the list is : "<< listo.LengthIs()<<endl;
    cout << "Enter 5 integer numbers : "<<endl;
    for(int i=0;i<5;i++)
    {
    cout << "Enter ["<<i<<"] :";
    cin>>temp;
    listo.InsertItem(temp);
    }

    cout << "List is shown: ";
    for(int i=0;i<listo.LengthIs();i++)
    {
        listo.GetNextItem(temp);
        cout << temp << " ";
    }

    cout << endl;
    cout << "Retrieve 2 items from the list :"<< endl;
    for(int i=0;i<2;i++)
    {
        cin>>temp;
        listo.RetrieveItem(temp,found);
        if(found)
            cout << "Item Found" << endl;
        else
            cout << "Item not found " << endl;
    }
    if(listo.IsFull())
        cout << "List is full"<<endl;
    else
        cout << "List is not full"<<endl;

    cout << "Delete an item from the list :";
    cin>> temp;
    listo.DeleteItem(temp);
    listo.ResetList();
    for(int i=0;i<listo.LengthIs();i++)
    {
        listo.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    if(listo.IsFull())
        cout << "List is full"<<endl;
    else
        cout << "List is not full"<<endl;
    SortedType <TimeStamp> listo1;
    here:
    cout << "Enter how many items you want to enter[Max 5] : ";
    cin>>list_size;
    if(list_size<0 || list_size>5)
        goto here;
    TimeStamp x1;
    for(int i=0;i<list_size;i++)
    {
        cout << "Enter time " <<" ["<<i<<"] :"<<endl;
        cout<< " hour :";
        cin>>temp;
        x1.Hour(temp);
        cout<< " Minute :";
        cin>>temp;
        x1.Minute(temp);        cout<< " Second :";
        cin>>temp;
        x1.Second(temp);
    listo1.InsertItem(x1);
    }
    cout << "Item list:"<<endl;
    for(int i=0;i<listo1.LengthIs();i++)
{
    listo1.GetNextItem(x1);
    x1.print();
    cout << endl;
}
cout << endl;
cout << "Enter time to delete TimeStamp's record : ";
cout << "Hour :";
cin>>temp;
x1.Hour(temp);
cout << "Minute :";
cin>>temp;
x1.Minute(temp);

cout<< "Second :";
cin>>temp;
x1.Second(temp);
listo1.DeleteItem(x1);
cout << "Enter time to retrieve TimeStamp's record : ";
cout << "Hour :";
cin>>temp;
x1.Hour(temp);
cout << "Minute :";
cin>>temp;
x1.Minute(temp);
cout<< "Second :";
cin>>temp;
x1.Second(temp);
listo1.RetrieveItem(x1,found);
x1.print();
if(found)
    cout << "Item Found" << endl;
else cout << "Item not found " << endl;
listo1.ResetList();
    cout << "Student List :"<<endl;
    for(int i=0;i<listo1.LengthIs();i++)
{
    listo1.GetNextItem(x1);
    x1.print();
    cout << endl;
}

}
