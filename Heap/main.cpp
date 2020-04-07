#include <iostream>
#include "pqtype.cpp"
using namespace std;

int main(){
    int pq_size;
    int n,temp;
    cout << "Enter the Priority queue size:";
    cin>> pq_size;
    PQType<int> pq(pq_size);
    if(pq.IsEmpty())
        cout << "Queue is Empty" <<endl;
    else
        cout << "Queue is not Empty" <<endl;

    cout <<"Enter how many values you want to enqueue :";
    cin>>n;
    cout << "Enter the values :";
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        pq.Enqueue(temp);
    }
     if(pq.IsEmpty())
        cout << "Queue is Empty" <<endl;
    else
        cout << "Queue is not Empty" <<endl;
    cout << "How many elements you want to dequeue and print ? :";
    cin >>n;
    cout << "Dequeuing "<< n<<" items and printing them ..."<< endl;
    for(int i=0; i<n; i++){
        pq.Dequeue(temp);
        cout << temp << endl;
    }

    cout <<"\n\n Second Task :" << endl;
    cout << "Enter number of magical bags:";
    cin>>n;
    int k;
    cout <<"Enter minutes :";
    cin >>k;
    cout <<"Enter the sequence of candies in bags:";
     PQType<int> pq1(n);
     for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        pq1.Enqueue(temp);
    }


    int sum=0;
    for(int i=0;i<k;i++)
    {
        pq1.Dequeue(temp);
        sum+=temp;
        pq1.Enqueue(temp/2);
    }

        cout << "Maximum candy : " << sum << endl;;
        return 0;

}
