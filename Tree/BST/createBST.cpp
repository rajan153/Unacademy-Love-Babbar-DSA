#include<iostream>
#include<queue>
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

Node* buildBST(Node* root, int data)
{
    if(root == NULL)
    {
        Node* newNode = new Node(data);
        return newNode;
    }
    if(data > root->data)
        root->right = buildBST(root->right, data);
    else
        root->left = buildBST(root->left, data);
    
    return root;
}

void createBST(Node* &root)
{
    cout<<"Enter the value of Root Node: "<<endl;
    int data;
    cin>>data;
    
    while(data != -1)
    {
        root = buildBST(root, data);
        cout<<"Enter the data for Node: "<<endl;
        cin>>data;
    }
}

void levelTreeTraversal(Node* &root)
{
    queue<Node*> q;
    q.push(root);
    //1st Change
    q.push(NULL);
    //Tu Nikal
    while(!q.empty())
    {
        Node* front = q.front();
        q.pop();
        if(front == NULL)
        {
            cout<<endl;
            //Catch Here
            if(!q.empty()) // Still ELement are Present
                q.push(NULL);
        }
        else
        {
            cout<<front->data<<" ";

            //Bache Chod jaa
            if(front->left != NULL)
                q.push(front->left);
            if(front->right != NULL)
                q.push(front->right);
        }
    }
}

void preOrder(Node*& root)
{
    if(root == NULL)
        return;
    //N
    cout<<root->data<<" ";
    //left
    preOrder(root->left);
    //right
    preOrder(root->right);
}
void inOrder(Node*& root)
{
    if(root == NULL)
        return;
    //left
    inOrder(root->left);
    //N
    cout<<root->data<<" ";
    //right
    inOrder(root->right);
}
void postOrder(Node*& root)
{
    if(root == NULL)
        return;
    //left
    postOrder(root->left);
    //right
    postOrder(root->right);
    //N
    cout<<root->data<<" ";
}

bool searchNum(Node* root, int target)
{
    if(root == NULL)
        return NULL;
    if(root->data == target)
        return root->data;
    if(root->data > target){
        bool leftAns = searchNum(root->left, target);
        if(leftAns == true)
            return true;
    }
    else{
        bool rightAns = searchNum(root->right, target);
        if(rightAns == true)
            return true;
    }
    return false;
}
int main()
{
    Node* root = NULL;
    createBST(root);
    levelTreeTraversal(root);
    cout<<endl;
    cout<<"PreOrder"<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"inOrder"<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"postOrder"<<endl;
    postOrder(root);
    cout<<endl;
    int target;
    cout<<"ENter the Target"<<endl;
    cin>>target;
    cout<<"Found or Not: "<<searchNum(root, target);
}