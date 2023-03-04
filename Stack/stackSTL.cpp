#include<iostream>
#include<stack>
using namespace std;
int main()
{
	//Creation
	stack<int> st;
	//Check stack is Empty or Not
	cout<<"Check stack is Empty or Not: "<<st.empty()<<endl;
	//Push the Element int The Stack/ Insertion
	st.push(5);
    //SIze of Stack
	cout<<"Size of Stack is: "<<st.size()<<endl;
	st.push(10);
	st.push(15);
	st.push(19);
	cout<<"Top Elemnt in Stack is: "<<st.top()<<endl;
	//Remove the Element
	st.pop();
    //For Checking The TOP value of Stack
	cout<<"Top Elemnt in Stack after Pop is: "<<st.top()<<endl;
	cout<<"Size of Stack is: "<<st.size()<<endl;
	//Check stack is Empty or Not
	cout<<"Check stack is Empty or Not: "<<st.empty()<<endl;
}