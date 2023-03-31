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
// Not Optimized But Working T.C-> O(N*2)
// int height(Node* root)
//     {
//         if(root == NULL)
//             return 0;
//         return max(height(root->left), height(root->right)) + 1;
//     }
//     bool isBalanced(Node* root) {
//         if(root == NULL)
//             return 1;
//         bool left = isBalanced(root->left);
//         bool right = isBalanced(root->right);

//         bool diff = abs(height(root->left) - height(root->right)) <= 1;

//         if(left && right && diff)
//             return true;
//         else
//             return false;
//     }

//Optimized Solution T.C-> O(N)
pair<int,bool> solve(Node* &root)
{
    if(root == NULL)
        return make_pair(0, true);

    pair<int,bool> left = solve(root->left);
    pair<int,bool> right = solve(root->right);
    
    bool diff = abs(left.first - right.first) <= 1;
    if(left.second && right.second && diff)
        return make_pair(max(left.first, right.first) + 1, true);
    else
        return make_pair(max(left.first, right.first) + 1, false);
}
bool isBalanced(Node* &root)
{
    pair<int, bool> ans = solve(root);
    return ans.second;
}
int main()
{
    Node* root = NULL;
    root = buildTree();
    //Traversal
    levelTreeTraversal(root);
    // cout<<endl;
    cout<<"Diameter is: "<<isBalanced(root);   
}