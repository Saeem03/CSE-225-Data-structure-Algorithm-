#ifndef SORTEDLIST_H_INCLUDED
#define SORTEDLIST_H_INCLUDED
#include<iostream>
using namespace std;
class ListLimitExceed
{

};
class EmptyList
{

};

template <class ItemType>
class Sorted
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };

public:
    Sorted();
    ~Sorted();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void RetrieveItem(ItemType&,bool&);
    void InsertItem(ItemType);
    void DeleteItem(ItemType&);
    void ResetList();
    void GetNextItem(ItemType&);
    private :
    NodeType* head;
    NodeType* foot;
    NodeType* nextItem;
    int length;
};
#endif // SORTEDLIST_H_INCLUDED
