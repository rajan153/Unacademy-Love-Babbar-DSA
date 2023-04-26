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
class info
{
    public:
    int mini;
    int maxi;
    int size;
    bool isBST;
    info()
    {

    }
    info(int a, int b, int c, int d)
    {
        mini = a;
        maxi = b;
        size = c;
        isBST = d;
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
void levelTreeTraversal(Node *&root)
{
    queue<Node *> q;
    q.push(root);
    // 1st Change
    q.push(NULL);
    // Tu Nikal
    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();
        if (front == NULL)
        {
            cout << endl;
            // Catch Here
            if (!q.empty()) // Still ELement are Present
                q.push(NULL);
        }
        else
        {
            cout << front->data << " ";

            // Bache Chod jaa
            if (front->left != NULL)
                q.push(front->left);
            if (front->right != NULL)
                q.push(front->right);
        }
    }
}
info solve(Node* root, int& ans)
{
    //Base Case
    if(root == NULL)
        return info(INT_MAX, INT_MIN, 0, true);
    
    info leftAns = solve(root->left, ans);
    info rightAns = solve(root->right, ans);

    info curr;
    curr.size = leftAns.size + rightAns.size + 1;
    curr.mini = min(leftAns.mini, root->data);
    curr.maxi = max(rightAns.maxi, root->data);

    if(leftAns.isBST && rightAns.isBST && (root->data > leftAns.maxi && root->data < rightAns.mini))
        curr.isBST = true;
    else
        curr.isBST = false;
    
    //Update BST
    if(curr.isBST)
        ans = max(ans, curr.size);
    return curr;
}
int largestBST(Node* root)
{
    int ans = 0;
    solve(root, ans);
    return ans;

}
int main()
{
    Node* root = NULL;
    root = buildTree();
    levelTreeTraversal(root);
    cout<<endl;
    cout<<"Size of Larget BST: "<<largestBST(root);
}