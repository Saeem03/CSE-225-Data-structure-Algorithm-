#include <iostream>
#include "pqtype.cpp"
using namespace std;

int main()
{
    int temp;
    int sum=0;
    int AddAll=0;
    int n;
    while(true)
        {
            cout << "Numbers in the set : ";
            cin>>n;
            if(n==0)
                break;
            PQType<int> pq(n);
            cout << "Enter the numbers : "<< endl;
            for(int i=0; i<n; i++)
                {
                    cin >> temp;
                    pq.Enqueue(temp);
                }
            pq.Dequeue(sum);
            for(int i=0; !pq.IsEmpty(); i++)
                {
                    pq.Dequeue(temp);
                    sum+=temp;
                    AddAll+=sum;
                }

            cout << "Output : "<< AddAll  << endl << endl;
            AddAll=0;
        }

}
