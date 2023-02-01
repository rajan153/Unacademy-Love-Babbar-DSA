#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* Next;
    Node(int d)
    {
        this->data = d;
        this->Next = NULL;
    }
};
int main()
{
    Node* first = new Node(3);
    cout<<first->data<<endl;
    cout<<first->Next<<endl;
}