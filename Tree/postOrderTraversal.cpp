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
void postOrder(Node*& root)
{
    if(root == NULL)
        return;
    //left
    postOrder(root->left);
    //right
    postOrder(root->right);
    //Root
    cout<<root->data<<endl;
}
int main()
{
    Node* root = NULL;
    root = buildTree();
    //Traversal
    postOrder(root);
}