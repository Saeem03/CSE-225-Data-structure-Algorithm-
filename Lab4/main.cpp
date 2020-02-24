#include "1912218642_Md_Saeem_Hossain_Shanto_unsortedtype.cpp"
#include "1912218642_Md_Saeem_Hossain_Shanto_studentinfo.cpp"
#include <iostream>
using namespace std;

int main()
{
    bool found;
    int list_size,temp;
    string name;
    UnsortedType <int> listo;
    cout << "Enter 4 integer numbers : "<<endl;
    for(int i=0;i<4;i++)
    {
    cout << "Enter ["<<i<<"] :";
    cin>>temp;
    listo.InsertItem(temp);
    }
    cout << "List Length is :" << listo.LengthIs()<<endl;
    cout << "Enter one more Integer number : ";
    cin>>temp;
    listo.InsertItem(temp);

    cout << "List is shown: ";
    for(int i=0;i<listo.LengthIs();i++)
    {
        listo.GetNextItem(temp);
        cout << temp << " ";
    }

    cout << endl;
    cout << "Retrieve 4 items from the list :"<< endl;
    for(int i=0;i<4;i++)
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

    if(listo.IsFull())
        cout << "List is full"<<endl;
    else
        cout << "List is not full"<<endl;
    for(int i=0;i<2;i++)
    {
    cout << "Delete an item from the list :";
    cin>> temp;
    listo.DeleteItem(temp);
    cout << "List is shown: ";
    listo.ResetList();
    for(int i=0;i<listo.LengthIs();i++)
    {
        listo.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    }
    UnsortedType <studentInfo> listo1;
    here:
    cout << "Enter how many items you want to enter[Max 5] : ";
    cin>>list_size;
    if(list_size<0 || list_size>5)
        goto here;
    studentInfo x1;
    for(int i=0;i<list_size;i++)
    {
        cout << "Enter Student" <<" ["<<i<<"] :"<<endl;
        fflush(stdin);
        cout<< " name :";
        cin>>name;
        x1.Name(name);
        cout<< " ID :";
        cin>>temp;
        x1.Id(temp);        cout<< " CGPA :";
        cin>>temp;
        x1.CGPA(temp);
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
cout << "Enter ID to delete student's record : ";
cin>>temp;
x1.Id(temp);
listo1.DeleteItem(x1);
cout << "Enter Id to retrieve student's record : ";
cin>>temp;
x1.Id(temp);
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
