#include<iostream>
using namespace std;
class Queue{
    public:
    int* arr;
    int front;
    int rear;
    int size;
    Queue(int n)
    {
        arr = new int[n];
        front = 0;
        rear = 0;
        size = n;
    }
    void push(int element)
    {
        if(rear == size)
        {
            cout<<"Overflow "<<endl;
            return;
        }
        else
        {
            arr[rear] = element;
            rear++;
        }
    }
    void pop()
    {
        if(front == rear)
        {
            cout<<"UnderFlow"<<endl;
            return;
        }
        else
        {
            arr[front] = -1;
            front++;
            if(front == rear)
                front == rear == 0;
        }
    }
    bool isEmpty()
    {
        if(front == rear)
            return true;
        else
            return false;
    }
    int getSize()
    {
        return this->size;
    }
    int getFront()
    {
        if(front == rear)
            return -1;
        else
            return arr[front];
    }
};
int main()
{
    Queue *q = new Queue(5);
    q->push(3);
    q->push(5);
    q->push(7);
    q->push(9);
    cout<<"Front Element: "<<q->getFront()<<endl;
    q->pop();
    cout<<"Front Element after POP: "<<q->getFront()<<endl;
    cout<<"Size of Queue: "<<q->getSize()<<endl;
    cout<<"Empty or Not: "<<q->isEmpty()<<endl;
    while(!q->isEmpty())
    {
        cout<<q->getFront()<<" ";
        q->pop();
    }
}