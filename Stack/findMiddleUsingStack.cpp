#include<iostream>
#include<stack>
using namespace std;
void printMiddle(stack<int>& st, int n)
{
    if(st.empty())
    {
        cout<<"Stack is Empty";
    }
    if((n/2 ) + 1 == st.size())
    {
        cout<<"Middle is: "<<st.top();
        return;
    }
    //Step1
    int topElement = st.top();
    st.pop();
    //Step2
    printMiddle(st, n);
    //Step3
    st.push(topElement);
}
int main()
{
    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(7);
    printMiddle(st, st.size());
    return 0;
}