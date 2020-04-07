#include "Binarysearchtree.cpp"
#include <iostream>
#include<array>

using namespace std;
void preOrder(TreeNode<int>* node)
{
    if (node == NULL)
        return;
    cout << node->info << " ";
    preOrder(node->left);
    preOrder(node->right);
}
     TreeNode<int>* newNode(int info)
{
    TreeNode<int>* node = new TreeNode<int>();
    node->info = info;
    node->left = NULL;
    node->right = NULL;

    return node;
}
     TreeNode<int>* Balance(int arr[],int first, int last)
{
    if (first > last)
    return NULL;

    int mid = (first + last)/2;
    TreeNode<int> *root = newNode(arr[mid]);
    root->left = Balance(arr, first,mid - 1);
    root->right = Balance(arr, mid + 1, last);
    return root;
}

int main()
{
    TreeType<int> t;
    int temp;
    if(t.IsEmpty())
        cout << "Tree is empty" << endl;
    else cout <<"Tree is not empty" << endl;
    cout <<"Insert 10 integers :";
    t.InsertItem(4);
    t.InsertItem(9);
    t.InsertItem(2);
    t.InsertItem(7);
    t.InsertItem(3);
    t.InsertItem(11);
    t.InsertItem(17);
    t.InsertItem(0);
    t.InsertItem(5);
    t.InsertItem(1);
//    for(int i=0;i<10;i++)
//    {
//       cin>>temp;
//       t.InsertItem(temp);
//    }
    if(t.IsEmpty())
        cout << "Tree is empty" << endl;
    else cout <<"Tree is not empty" << endl;
    cout << "Number of items :" << t.LengthIs() << endl;
//    cout << "which item to search :";
//    cin >> temp;
//    bool found;
//    t.RetrieveItem(temp,found);
//    if(found)
//        cout <<"Item is  found"<< endl;
//    else  cout <<"Item is not found"<< endl;
//    cout << "which item to search :";
//    cin >> temp;
//    t.RetrieveItem(temp,found);
//    if(found)
//        cout <<"Item is  found"<< endl;
//    else  cout <<"Item is not found"<< endl;
    cout << "Printing element in In-Order traversal :";
    t.Print();
//    cout << "\nPrinting element in Pre-Order traversal :";
//    bool finish=false;
//    t.ResetTree(PRE_ORDER);
//    while(!finish)
//    {
//    t.GetNextItem(temp,PRE_ORDER,finish);
//        cout << temp << " " ;
//    }
//    cout << "\nPrinting element in Post-Order traversal :";
//    finish=false;
//    t.ResetTree(POST_ORDER);
//    while(!finish)
//    {
//    t.GetNextItem(temp,POST_ORDER,finish);
//        cout << temp << " " ;
//    }
//    cout << "\nMaking the Tree list empty." << endl;
//    t.MakeEmpty();
//    cout << endl;
//    if(t.IsEmpty())
//        cout << "Tree is empty" << endl;
//    else cout <<"Tree is not empty" << endl;
    cout << endl;
    cout << "Min :";
    t.getMin();
    cout << endl;
    t.getMax(temp);
    cout << "Max :" << temp;
//    TreeType<int> z;
//    int x[] ={11 ,9 ,4 ,2 ,7 ,3 ,17 ,0 ,5,1};
//    int n= sizeof(x)/sizeof(*x);
//    int y[n];
//    int min=0,posi=0;
//    cout << "Given integer array :";
//    for(int i=0;i<n;i++)
//        cout << x[i] << " ";
//    cout << endl;
//    for(int i=0;i<n;i++)
//    {
//        min=x[i];
//
//        for(int j=0;j<n;j++)
//        {
//            if(x[j]==min)
//                continue;
//            else if(min>x[j])
//            {
//                posi++;
//            }
//
//        }
//        y[posi]=min;
//        posi=0;
//
//    }
//     for(int i=0;i<n;i++)
//    {
//        x[i]=y[i];
//    }
//    cout << "Sorted Array : ";
//    for(int i=0;i<n;i++)
//    {
//     cout <<x[i]<< " ";
//    }
//    cout << endl;
//    TreeNode<int>* root = Balance(x, 0, n-1);
//    cout <<"Final Result :";
//    preOrder(root);
//    cout << endl;

    return 0;
}
