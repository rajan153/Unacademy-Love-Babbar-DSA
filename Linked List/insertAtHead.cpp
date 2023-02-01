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
void insertAtHead(Node* &head, int d)
{
    //Creation
    Node* newNode = new Node(d);
    //Point //Set the nextpoint to Head Node
    newNode->Next = head;
    //Head
    head = newNode;
}
void traverse(Node* &head)
{
    Node* temp = head;
    while(temp != 0)
    {
        cout<<temp->data<<" ";
        temp = temp->Next;
    }
    cout<<endl;
}
int main()
{
    //Object Creation
    Node* a = new Node(3);
    Node* head = a;
    //Call The Function
    insertAtHead(head, 5);
    insertAtHead(head, 7);
    insertAtHead(head, 9);
    insertAtHead(head, 11);

    //Printing Function
    traverse(head);
}