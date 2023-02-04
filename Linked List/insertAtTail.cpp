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
void insertAtTail(Node* &tail, int d) {
        //step 1: cration of Node
        Node* newNode = new Node(d);
        //step2: 
        tail->Next = newNode;
        //step3: head update;
        tail = newNode;
}
void traverse(Node* &tail)
{
    Node* temp = tail;
    while(temp != 0)
    {
        cout<<temp->data<<" ";
        temp = temp->Next;
    }
    cout<<endl;
}
int main()
{
    Node* a = new Node(3);
    Node* head = a;
    Node* tail = a;
    //Call the Function
    insertAtTail(tail, 5);
    insertAtTail(tail, 7);
    insertAtTail(tail, 9);
    insertAtTail(tail, 11);
    //Printing Function
    traverse(head);
    return 0;
}