#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    int size = q.size();
    int half = size/2;

    stack<int> s;
    for(int i=0; i<half; i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    for(int i =0; i<half; i++)
    {
        q.push(q.front());
        q.pop();
    }
    for(int i=0; i<half; i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
    cout<<"Answer: ";
    for(int i=0; i<size; i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}