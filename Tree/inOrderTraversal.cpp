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
    cout<<"Enter the Data: "<<endl;
    int data;
    cin>>data;
    if(data == -1)
        return NULL;
    
    Node* newNode = new Node(data);
    cout<<"Enter for the Left Node: "<<data<<endl;
    newNode->left = buildTree();
    
    cout<<"Enter for the Right Node: "<<data<<endl;
    newNode->right = buildTree();
    
    return newNode;
}
void inOrder(Node*& root)
{
    if(root == NULL)
        return;
    //left
    inOrder(root->left);
    //root
    cout<<root->data<<endl;
    //right
    inOrder(root->right);
}
int main()
{
    Node* root = NULL;
    root = buildTree();
    //Traversal
    inOrder(root);
}