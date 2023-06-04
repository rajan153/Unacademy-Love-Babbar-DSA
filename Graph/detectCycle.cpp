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

    void DFS(int src, map<int, bool>& visited)
    {
        visited[src] = true;
        cout<<src<<" ";
        // neighbours
        for(auto i : adjList[src])
        {
            if(!visited[i])
                DFS(i, visited);
        }
    }

    bool isCycle(int src)
    {
        map<int, bool> visited;
        map<int, int> parent;
        queue<int> q;

        q.push(src);
        visited[src] = true;
        visited[src] = -1;

        while(!q.empty())
        {
            int front = q.front();
            q.pop();

            //Neighbours
            for(auto i : adjList[front])
            {
                if(visited[i] == true && i != parent[front])
                    return true;
                else if(!visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                    parent[i] = front;
                }
            }
        }
        return false;
    }
};
int main()
{
    Graph<int> g;
    g.add(0, 2, 0);
    g.add(2, 3, 0);
    g.add(2, 4, 0);
    g.add(3, 4, 0);
    g.add(1, 3, 0);

    cout<<"print the Adjacency List"<<endl;
    g.printAdj();

    cout<<"print the DFS: "<<endl;

    map<int, bool> visited;
    //This is For Connected Graph
    // g.DFS(0, visited);

    //This is For Disconnected Graph
    for(int i = 0; i < 5; i++)
    {
        if(!visited[i])
            g.DFS(i, visited);
    }

    cout<<"Cycle or not: "<<g.isCycle(0);
    return 0;
}