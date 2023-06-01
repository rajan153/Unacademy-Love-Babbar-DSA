#include<iostream>
#include<map>
#include<list>
#include<queue>
using namespace std;

//To make Genric Code with help of template i can make any Graph of any DataType
template<typename T>

class Graph{
    public:
    map<T, list<T>> adjList;

    void add(T u, T v, bool direction)
    {
        //Direction-->0  undirected Graph
        //direction-->1  Directed Graph

        //For U-->V
        adjList[u].push_back(v);

        //Check V-->U
        if(direction == 0)
            adjList[v].push_back(u);
    }

    void printAdj()
    {
        for(auto i : adjList){
            cout<<i.first<<" -> ";
            for(auto j : i.second)
                cout<<j<<", ";
            cout<<endl;
        }
    }

    void BFS(int src, map<int, bool>& visited)
    {
        queue<int> q;
        q.push(src);

        
        visited[src] = true;

        while(!q.empty())
        {
            int front = q.front();
            cout<<front<<", ";
            q.pop();

            //Neighbour
            for(auto i : adjList[front])
            {
                if(!visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }
};
int main()
{
    Graph<int> g;
    g.add(0, 1, 0);
    g.add(1, 2, 0);
    g.add(1, 3, 0);
    g.add(2, 3, 0);
    g.add(3, 4, 0);
    g.add(2, 4, 0);

    cout<<"print the Adjacency List"<<endl;
    g.printAdj();

    cout<<"print the BFS: "<<endl;
    //Only for connected Graph
    // g.BFS(0);

    //For Disconnected Graph
    map<int, bool> visited;
    int n = 5;
    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
            g.BFS(i, visited);
    }

    return 0;
}