#ifndef UNSORTED_H_INCLUDED
#define UNSORTED_H_INCLUDED
const int MAX_ITEMS=5;
class Unsorted{
private :
    int length;
    int currentpos;
    int info[MAX_ITEMS];
public :
    Unsorted();
    Unsorted(int);
    void MakeEmpty();
    void LengthIs();
    bool IsFull();
    bool IsEmpty();
    void InsertItem(int);
    void deletItem(int);
    void ResetList();
    void getNextItem(int&);
};


#endif // UNSORTED_H_INCLUDED
