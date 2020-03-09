#include <iostream>
#include " unsorted.h"
using namespace std;
Unsorted :: Unsorted()
{
    length=0;
    currentpos=-1;
}
void Unsorted :: MakeEmpty()
{
    length=0;
}
void ResetList()
{
    currentpos=-1;
}
bool Unsorted :: IsFull()
{
   return (length == MAX_ITEMS)
}
int Unsorted ::  LengthIs()
{
    return length;
}
