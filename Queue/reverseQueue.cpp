#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    //Creation
    queue<int> q;
    //Push/ Add Element in Queue
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(9);
    stack<int> s;
    while(!q.empty())
    {
    	int element = q.front();
    	q.pop();
    	s.push(element);
	}
	while(!s.empty())
    {
    	int element = s.top();
    	s.pop();
    	q.push(element);
	}
	cout<<"Reverse String: ";
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
}