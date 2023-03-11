#include<iostream>
#include<stack>
using namespace std;
void sortInsert(stack<int>& s, int data)
{
    if(s.empty() || s.top() < data)
    {
        s.push(data);
        return;
    }
    //Step1
    int topElement = s.top();
    s.pop();
    //Step2
    sortInsert(s, data);
    //Step3
    s.push(topElement);
}
void sortStack(stack<int>& s)
{
    if(s.empty())
    {
        return;
    }
    //Step1:
    int topElement = s.top();
    s.pop();
    //Step2:
    sortStack(s);
    //Step3:
    sortInsert(s, topElement);
}
int main()
{
    stack<int> s;
    s.push(2);
    s.push(1);
    s.push(4);
    s.push(3);
    sortStack(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}