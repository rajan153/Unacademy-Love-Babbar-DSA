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
int height(Node* root)
    {
        if(root == NULL)
            return 0;
        return 1+max(height(root->left), height(root->right));
    }
    int diameterOfBinaryTree(Node* root) {
        if(root == NULL)
            return 0;
        int option1 = diameterOfBinaryTree(root->left);
        int option2 = diameterOfBinaryTree(root->right);
        int option3 = height(root->left) + height(root->right);
        return max(option1, max(option2, option3));
    }
int main()
{
    Node* root = NULL;
    root = buildTree();
    //Traversal
    levelTreeTraversal(root);
    // cout<<endl;
    cout<<"Diameter is: "<<diameterOfBinaryTree(root);   
}