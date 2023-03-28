#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* buildTree()
{
    cout<<"Enter the Data for Root Node: "<<endl;
    int data;
    cin>>data;
    if(data == -1)
        return NULL;
    Node* newNode = new Node(data);

    cout<<"Enter the data for Left Node: "<<data<<endl;
    newNode->left = buildTree();
    
    cout<<"Enter the data for Right Node: "<<data<<endl;
    newNode->right = buildTree();

    return newNode;
}
int main()
{
    Node* root = NULL;
    root = buildTree();
}