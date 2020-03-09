#include "SortedList.h"
#include <iostream>
#include<cstddef>
using namespace std;

template <class ItemType>
Sorted<ItemType> :: Sorted()
{
    foot=NULL;
    head=NULL;
    nextItem=NULL;
    length=0;
}
template <class ItemType>
Sorted<ItemType> :: ~Sorted()
{
    MakeEmpty();
    delete head;
    delete foot;
}
template <class ItemType>
bool Sorted<ItemType> :: IsFull()
{
    NodeType* location;
    try
        {
            location = new  NodeType;
            delete location;
            return false;
        }
    catch(std ::bad_alloc& exception)
        {
            return true;
        }
}

template <class ItemType>
int Sorted<ItemType> :: LengthIs()
{
    return length;
}

template <class ItemType>
void Sorted<ItemType> :: InsertItem(ItemType item)
{

    if(IsFull())
    {
        cout<< "Out of space in the heap." <<endl;
        throw ListLimitExceed();
    }
    else
        {
            NodeType* newNode = new NodeType;
            newNode->info=item;
            if(head==NULL)
                {
                    newNode->next=NULL;
                    head =newNode;
                    foot =newNode;
                }
            else if(item>foot->info)
                {
                    newNode->next=NULL;
                    foot->next=newNode;
                    foot=newNode;
                }
            else if(item<head->info)
                {
                    newNode->next=head;
                    head =newNode;
                }
            else
                {
                    NodeType* ptr = new NodeType;
                    ptr = head;
                    while(item>ptr->next->info)
                        {
                            ptr=ptr->next;
                        }
                    newNode->next=ptr->next;
                    ptr->next=newNode;
                }
            length++;
        }
}
template <class ItemType>
void Sorted<ItemType> :: GetNextItem(ItemType& item)
{

    if(head==NULL)
        {
            cout << "The List has nothing." <<endl;            throw EmptyList();
        }
    else if(nextItem==NULL)
        {
            nextItem= new NodeType;
            nextItem=head;
            item=nextItem->info;
            nextItem=nextItem->next;

        }
    else if(nextItem->next==NULL)
        {
            item=nextItem->info;
        }
    else
        {

            item =nextItem->info;
            nextItem=nextItem->next;
        }
}
template <class ItemType>
void Sorted<ItemType> :: DeleteItem(ItemType& item)
{
    if(head != NULL)
        {
            NodeType* ptr = new NodeType;
            ptr=head;

            if(head == foot)
                {
                    head =NULL;
                    foot = NULL;
                    delete ptr;
                    length--;
                }
            else if(item==head->info)
                {
                    head=head->next;
                    delete ptr;;
                    length--;
                }
            else
                while(ptr->next!=NULL)
                    {
                        if(item==ptr->next->info)
                            {
                                NodeType* locate = new NodeType;
                                locate=ptr;
                                ptr=ptr->next;
                                locate->next=ptr->next;
                                foot=locate;
                                delete ptr;
                                length--;
                                break;
                            }
                        ptr=ptr->next;
                    }
        }
                cout<<"Deletion was not successful"<<endl;
}
template <class ItemType>
void Sorted<ItemType> :: RetrieveItem(ItemType& item,bool& found)
{
    if(head==NULL)
        {
            found=false;

        }
    else
        {
            NodeType* ptr = new NodeType;
            ptr=head;
            while(ptr!=NULL)
                {
                    if(item==ptr->info)
                        {
                            found =true;
                            return;
                        }
                    ptr=ptr->next;
                    found=false;
                }
        }

}
template <class ItemType>
void Sorted<ItemType> :: MakeEmpty()
{
    NodeType* locate = new NodeType;

    while(head!=NULL)
        {
            locate=head;
            head=head->next;
            delete locate;
        }
    foot =NULL;
    nextItem=NULL;
    length=0;
}

template <class ItemType>
void Sorted<ItemType>:: ResetList()
{
    nextItem=head;
}
