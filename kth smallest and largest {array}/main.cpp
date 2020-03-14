#include <iostream>
using namespace std;
int main()
{
    int x[]= {7,1,0,6,2,-1};
    const int n= sizeof(x)/sizeof(*x);
    int y[n];
    int min=0,posi=0;
    int kth=0;
    cout << "Enter the value of k :" ;
    cin>> kth;
    cout << endl;
    for(int i=0;i<n;i++)
        cout << x[i] << " ";
    cout << endl;
    for(int i=0;i<n;i++)
    {
        min=x[i];

        for(int j=0;j<n;j++)
        {
            if(x[j]==min)
                continue;
            else if(min>x[j])
            {
                posi++;
            }

        }
        y[posi]=min;
        posi=0;

    }
    cout <<endl;
    cout <<kth<<" th smallest Number is : " << y[kth-1] << endl;
    cout << kth<<" th largest Number is : " <<y[n-kth] << endl;
    return 0;
}
