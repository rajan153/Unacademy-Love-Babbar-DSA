#include<iostream>
#include<queue>
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
    //Check Front Element
    cout<<"Front Element is: "<<q.front()<<endl;
    //Remove Element
    q.pop();
    cout<<"Front Element is after POP: "<<q.front()<<endl;
    //Check Last Element
    cout<<"Check Last Element: "<<q.back()<<endl;
    //Check Queue is Empty or Not
    cout<<"Check Queue is Empty: "<<q.empty()<<endl;
    //Check Size
    cout<<"Size of Queue: "<<q.size()<<endl;
    //Printing
    cout<<"Printing Queue: "<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<"Check Queue is Empty after pop: "<<q.empty()<<endl;
}