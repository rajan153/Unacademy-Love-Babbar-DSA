#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    //Consturctor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head, int d)
{
    //Create
    Node* newNode = new Node(d);
    //Path
    newNode->next = head;
    //Head
    head = newNode;
}
void traverse(Node* &head)
{
    Node* a = head;
    while(a != 0)
    {
        cout<<a->data<<" ";
        a = a->next;
    }
    cout<<endl;
}
void insertAtLast(Node* &tail, int d)
{
    //create
    Node* newNode = new Node(d);
    //Path
    tail->next = newNode;
    //Head
    tail = newNode;
}
void insertAtPositon(Node* &tail, Node* &head, int Position, int d)
{
    //Fix Starting Position
    if(Position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    //Midle
    Node* temp = head;
    int cnt = 1;
    while(cnt < Position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    //Fix Last Position
    if(temp->next == NULL)
    {
        insertAtLast(tail, d);
        return;
    }
   //Create
   Node* newNode = new Node(d);
   //Path
   newNode->next = temp->next;
   //Head
   temp->next = newNode;
}
int main()
{
    Node* temp = new Node(3);
    cout<<"First Data At Linked List/ Base: "<<temp->data<<endl;
    cout<<"Last Element at Linked List: "<<temp->next<<endl;
    cout<<endl;
    //Function of Insert At Starting
    cout<<"Inserting At Starting: "<<endl;
    Node* head = temp;
    insertAtHead(head, 5);
    // Printing Function
    traverse(head);
    //Function of Insert At Last
    cout<<"Inserting At Last: "<<endl;
    Node* tail = temp;
    insertAtLast(tail, 7);
    insertAtLast(tail, 9);
    // Printing Function
    traverse(head);
    //Function of Insert At Any Position
    insertAtPositon(tail, head, 5, 10);
    // Printing Function
    traverse(head);
}