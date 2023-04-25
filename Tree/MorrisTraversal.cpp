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
//PreOrder MorrisTraversal
void morrisTraversal(Node* root)
{
    while(root)
    {
        if(root->left == NULL)
        {
            cout<<root->data<<" ";
            root = root->right;
        }
        else
        {
            Node* curr = root->left;
            while(curr->right && curr->right != root)
                curr = curr->right;
            if(curr->right == root)
            {
                curr->right = NULL;
                root = root->right;
            }
            else
            {
                cout<<root->data<<" ";
                curr->right = root;
                root = root->left;
            }
        }
    }
}
void preOrder(Node* root)
{
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    //left
    preOrder(root->left);
    //right
    preOrder(root->right);
}
int main()
{
    Node* root = NULL;
    root = buildTree();
    cout<<"PreOrder Traversal"<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"Morris Traversal"<<endl;
    morrisTraversal(root);
}