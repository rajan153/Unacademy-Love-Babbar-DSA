#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>& s, int data)
{
    if(s.empty())
    {
        s.push(data);
        return;
    }
     //Step1:
    int topElement = s.top();
    s.pop();
    //Step2:
    insertAtBottom(s, data);
    //Step3:
    s.push(topElement);
}
int main()
{
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    insertAtBottom(s, 1);
    // cout<<s.top();
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}