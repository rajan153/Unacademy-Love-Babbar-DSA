#include<iostream>
#include<map>
#include<list>
using namespace std;

//To make Genric Code with help of template i can make any Graph of any DataType
template<typename T>

class Graph{
    public:
    map<T, list<pair<T,T>>> adjList;

    void add(T u, T v, T weight, bool direction)
    {
        //Direction-->0  undirected Graph
        //direction-->1  Directed Graph

        //For U-->V
        adjList[u].push_back(make_pair(v, weight));

        //Check V-->U
        if(direction == 0)
            adjList[v].push_back(make_pair(u, weight));
    }

    void printAdj()
    {
        for(auto i : adjList){
            cout<<i.first<<" -> ";
            for(auto j : i.second)
                cout<<"("<<j.first<<", "<<j.second<<")";
            cout<<endl;
        }
    }
};
int main()
{
    Graph<int> g;
    g.add(0, 1, 3, 0);
    g.add(1, 2, 4, 0);
    g.add(1, 3, 9, 0);
    g.add(2, 3, 8, 0);
    g.add(3, 4, 11, 0);
    g.add(2, 4, 10, 0);

    cout<<"print the Adjacency List"<<endl;
    g.printAdj();

    return 0;
}