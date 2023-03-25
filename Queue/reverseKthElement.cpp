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
    int k = 3;
    int size = q.size();
    int remaining = size - 3;
    stack<int> s;
    for(int i=0;i<k; i++)
    {
        s.push(q.front());
        q.pop();
    }
    int sizeS = s.size();
    for(int i=0; i<sizeS; i++)
    {
        q.push(s.top());
        s.pop();
    }
    for(int i=0; i<remaining; i++)
    {
        q.push(q.front());
        q.pop();
    }
    cout<<"Reverse Kth Element Queue: ";
    for(int i=0; i<size; i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
	return 0;
}