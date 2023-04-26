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

Node* deletionNode(Node* root, int target)
{
    if(root == NULL)
        return NULL;
    if(root->data == target)
    {
        //0 child
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        //1 child
        if(root->left != NULL && root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right != NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        
        //2 child
        if(root->left != NULL && root->right != NULL)
        {
            Node* pre = root->left;
            while(pre->right != NULL)
                pre = pre->right;
            //copy
            root->data = pre->data;
            //solve bachi problem
            root->left = deletionNode(root->left, pre->data);
            return root;
        }

    }
    else if(root->data > target)
        root->left = deletionNode(root->left, target);
    else
        root->right = deletionNode(root->right, target);

    return root;
}
int main()
{
    Node* root = NULL;
    createBST(root);
    levelTreeTraversal(root);
    cout<<endl;
    
    int target;
    cout<<"Enter the Target"<<endl;
    cin>>target;
    root = deletionNode(root ,target);
    cout<<"Printing Tree Again: "<<endl;
    levelTreeTraversal(root);
    cout<<endl;
}