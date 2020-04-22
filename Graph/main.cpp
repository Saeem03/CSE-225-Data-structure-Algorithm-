#include <iostream>
#include "graphtype.cpp"
using namespace std;

int main()
{

    GraphType<char> x(8);
    char temp,temp1,temp2;
    int n;
    x.AddVertex('A');
    x.AddVertex('B');
    x.AddVertex('C');
    x.AddVertex('D');
    x.AddVertex('E');
    x.AddVertex('F');
    x.AddVertex('G');
    x.AddVertex('H');

    x.AddEdge('A','B',1);
    x.AddEdge('A','C',1);
    x.AddEdge('A','D',1);

    x.AddEdge('B','A',1);
    x.AddEdge('D','A',1);
    x.AddEdge('D','E',1);

    x.AddEdge('D','G',1);
    x.AddEdge('G','F',1);
    x.AddEdge('F','H',1);
    x.AddEdge('H','E',1);

    cout << endl;
    cout << "How many outdegree you want to print ? " <<endl;
    cin>> n;
    while(n--)
        {

            cout << "Find outdegree of : " ;
            cin >> temp;
            cout << temp <<"'s Outdegree : " <<  x.OutDegree(temp) <<endl;
            cout << endl;
        }
    cout << endl;
//    cout << "How many edges you want to print ? " <<endl;
//    cin>> n;
//    while(n--)
//        {
//
//            cout << "Find edges From : " ;
//            cin >> temp1;
//            cout <<"to :";
//            cin >>temp2;
//            cout << "There are "<< x.FoundEdge(temp1,temp2)  << " Edges found between "<< temp1 <<" , " << temp2<<" ." << endl;
//            cout << endl;
//        }
////    cout << "Edges found between B,D :"<<x.FoundEdge('B','D') << endl;
//    cout << endl;
//    cout << "How many Depth  First Search you want to print ? " <<endl;
//    cin>> n;
//    while(n--)
//        {
//            cout << "Enter starting vertex :";
//            cin >> temp1;
//            cout << "Enter destination vertex :";
//            cin >> temp2;
//            cout << "Depth First search  between  "<< temp1 <<", "<< temp2 << " :"<<endl;
//            x.DepthFirstSearch(temp1,temp2);
//            cout << endl;
//
//        }
//    cout << endl;
//    cout << "How many Breadth First Search you want to print ? " <<endl;
//    cin>> n;
//    while(n--)
//        {
//            cout << "Enter starting vertex :";
//            cin >> temp1;
//            cout << "Enter destination vertex :";
//            cin >> temp2;
//            cout << "Breadth First search  path between  "<< temp1 <<", "<< temp2 << " :"<<endl;
//            cout << endl;
//            x.BreadthFirstSearch(temp1,temp2);
//
//        }
//
//    cout << endl;
//    cout << "How many Breadth First Search with shortPath you want to print ? " <<endl;
//    cin>> n;
//    while(n--)
//        {
//            cout << "Enter starting vertex :";
//            cin >> temp1;
//            cout << "Enter destination vertex :";
//            cin >> temp2;
//            cout << "Breadth First search  path between  "<< temp1 <<", "<< temp2 << " : "<<endl;
//            x.ModifiedBreadthFirstSearch(temp1,temp2);
//            cout << endl;
//
//        }


    return 0;
}
