#include<iostream>
using namespace std;
class Stack
{
    public:
    int *arr;
    int top;
    int size;
    Stack(int s)
    {
        arr = new int[s];
        top = -1;
        size = s;
    }
    void push(int d)
    {
        if(top == size - 1)
        {
            cout<<"Stack Overflow "<<endl;
            return;
        }
        top++;
        arr[top] = d;
    }
    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }
    int getSize()
    {
        return this->top + 1;
    }
    int getTop()
    {
        if(top != -1)
        {
            return arr[top];
        }
        else
            return -1;
    }
    int getEmpty()
    {
        if(top == -1)
        {
            return 1;
        }
        else
            return 0;
    }
};
int main()
{
    Stack* st = new Stack(10);
    st->push(1);
    st->push(2);
    st->push(3);
    st->push(4);
    st->push(5);
    st->push(6);
    st->push(7);
    st->push(8);
    st->push(9);
    st->push(10);
    cout<<"Top Element: "<<st->getTop()<<endl;
    st->pop();
    cout<<"Top Element: "<<st->getTop()<<endl;
    cout<<"Check Empty before POP: "<<st->getEmpty()<<endl;
    st->pop();
    st->pop();
    st->pop();
    st->pop();
    st->pop();
    st->pop();
    st->pop();
    st->pop();
    st->pop();
    cout<<"Check Empty after POP: "<<st->getEmpty()<<endl;
    return 0;
}