#include <iostream>
#include "SortedList.cpp"
using namespace std;
void Print(Sorted<int> &listo)
{
    int temp;
    cout << "List :" << endl;
    for(int i=0;i<listo.LengthIs();i++)
    {
        listo.GetNextItem(temp);
        cout << "[" << i << "] :  " << temp<<  endl;
    }
    cout << endl;
    listo.ResetList();
}

int main()
{
    Sorted<int> x;
    bool f;
    int temp;
    if(x.IsFull())
        cout << "list Full " <<endl;
    else cout << "list Is not Full " <<endl;
    x.InsertItem(123);
    x.InsertItem(111);
    x.InsertItem(222);
    x.InsertItem(-111);
    x.InsertItem(-222);
    Print(x);
    cout <<"Length is : "<<x.LengthIs() <<endl;
    temp=1200;
    x.DeleteItem(temp);
    x.RetrieveItem(temp,f);
    if(f)
        cout << temp<<"  was found " << endl;
    else cout << temp <<" was  not found " << endl;
    temp=222;
    x.RetrieveItem(temp,f);
    if(f)
        cout << temp<<"  was found " << endl;
    else cout << temp <<" was  not found " << endl;
    x.MakeEmpty();
    cout << "Made the List Empty." << endl;
    temp=-222;
    x.RetrieveItem(temp,f);
    if(f)
        cout << temp<<"  was found " << endl;
    else cout << temp <<" was  not found " << endl;
    cout <<"Length : "<<x.LengthIs() <<endl;
    x.InsertItem(200);
    x.InsertItem(1200);
    x.InsertItem(0);
    x.InsertItem(-11);
    x.InsertItem(-11);
    x.InsertItem(-1200);
    x.InsertItem(-11);
    x.InsertItem(-10);
    x.InsertItem(9990);
    x.InsertItem(50);
    x.InsertItem(570);
    x.InsertItem(700);
    x.InsertItem(330);
    x.InsertItem(222);
    x.InsertItem(111);
    x.InsertItem(10);
    Print(x);
    cout << "Length : " << x.LengthIs() << endl;
    x.DeleteItem(temp);
    cout << endl;
    x.RetrieveItem(temp,f);
    if(f)
        cout << temp<<"  was found " << endl;
    else cout << temp <<" was  not found " << endl;
    temp=-10;
    x.DeleteItem(temp);
    x.RetrieveItem(temp,f);
    if(f)
        cout << temp<<"  was found " << endl;
    else cout << temp <<" was  not found " << endl;
    cout << "Length : " << x.LengthIs() << endl;

    return 0;
}
