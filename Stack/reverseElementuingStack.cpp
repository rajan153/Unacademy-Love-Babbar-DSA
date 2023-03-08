#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n;
    cin>> n;
    stack<int> s;
    while(n--)
    {
        int t;
        cin>>t;
        s.push(t);
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}