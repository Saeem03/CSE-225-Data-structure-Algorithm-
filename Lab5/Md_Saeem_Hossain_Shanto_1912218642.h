#ifndef MD_SAEEM_HOSSAIN_SHANTO_1912218642_H_INCLUDED
#define MD_SAEEM_HOSSAIN_SHANTO_1912218642_H_INCLUDED
const int MAX_ITEMS = 5;
template <class ItemType>
class SortedType
{
public :
SortedType();
void MakeEmpty();
bool IsFull();
int LengthIs();
void InsertItem(ItemType);
void DeleteItem(ItemType);
void RetrieveItem(ItemType&,bool&);
void ResetList();
void GetNextItem(ItemType&);
private:
int length;
ItemType info[MAX_ITEMS];
int currentPos;
};


#endif // MD_SAEEM_HOSSAIN_SHANTO_1912218642_H_INCLUDED
