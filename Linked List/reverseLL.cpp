#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
	//Constructor
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
	Node* temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
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
void insertAtMiddle(Node* &tail, Node* &head, int Position, int d)
{
	//For Starting Position
	if(Position == 1)
	{
		insertAtHead(head, d);
		return;
	}
	//For Middle Position
	Node* temp = head;
	int cnt = 1;
	while(cnt < Position - 1)
	{
		temp = temp->next;
		cnt++;
	}
	//For Last Value
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
//To Find The Length of LinkedList
int getLength(Node* &head)
{
	Node* temp = head;
	int cnt = 0;
	while(temp != NULL)
	{
		cnt++;
		temp = temp->next;
	}
	return cnt;
}
void deleteAnyNode(Node* &tail, Node* &head, int target, int Position)
{
	//Empty List
	if(head == NULL)
	{
		return;
	}
	Node* temp = head;
	Node* prev = NULL;
	if(target == temp->data && Position == 1)
	{
		head = head->next;
		temp->next = NULL;
		delete temp;
	}
	else
	{
		while(temp != NULL && temp->data != target)
		{
			prev = temp;
			temp = temp->next;
		}
		if(temp == NULL)
		{
			cout<<"Element Node Found: "<<endl;
			return;
		}
		//Found the Element
		prev->next = temp->next;
		temp->next = NULL;
		delete temp;
	}
}
Node* reverseLL(Node* &head)
{
	Node* temp = head;
	Node* prev = NULL;
	while(temp != NULL)
	{
		Node* next = temp->next;
		temp->next = prev;
		prev = temp;
		temp = next;
	}
	return prev;
}
int main()
{
	//Insertion All Method Head, Middle, ans Last
	//First
	Node* temp = new Node(3);
	cout<<"First Head: "<<temp->data<<endl;
	cout<<"Last Value: "<<temp->next<<endl;
	//Function of insertAtHead
	Node* head = temp;
	cout<<"insertAtHead Function Start: "<<endl;
	insertAtHead(head, 2);
	insertAtHead(head, 1);
	//Printing Function
	traverse(head);
	//Function of insertAtLast
	Node* tail = temp;
	cout<<"insertAtLast Function Start: "<<endl;
	insertAtLast(tail, 4);
	insertAtLast(tail, 5);
	//Printing Function
	traverse(head);
	//Function of insertAtMiddle
	cout<<"insertAtMiddle Function Start: "<<endl;
	insertAtMiddle(tail, head, 6, 7);
	//Printing Function
	traverse(head);
	cout<<"Head: "<<head->data<<endl;
	cout<<"Last: "<<tail->data<<endl;
	cout<<"Length Of Linked List: "<<getLength(head)<<endl;
	//Deletion All Method Head, Middle, ans Last
	//First
	cout<<"deleteAnyNode Function: "<<endl;
	deleteAnyNode(tail, head, 5, 1);
	//Printing Function
	traverse(head);
	cout<<"Head: "<<head->data<<endl;
	cout<<"Last: "<<tail->data<<endl;
	//Function of Reverse
	cout<<"Function of Reverse: "<<endl;
	head = reverseLL(head);
	traverse(head);
}