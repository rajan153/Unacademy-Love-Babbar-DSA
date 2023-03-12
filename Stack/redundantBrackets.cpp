#include<iostream>
#include<stack>
using namespace std;
bool checkRedundant(string s)
{
    stack<char> st;
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else if( ch == ')')
        {
            bool redundent = true;
            while(st.top() != '(')
            {
                char top = st.top();
                if(top == '+' || top == '-' || top == '*' || top == '/')
                    redundent = false;
                st.pop();
            }
            if(redundent == true)
                return true;
           st.pop();
        }
    }
    return false;
}
int main()
{
    string s = "((a) + (b*c) - (e/f))";
    cout<<"Answer is Here: "<<checkRedundant(s);
}