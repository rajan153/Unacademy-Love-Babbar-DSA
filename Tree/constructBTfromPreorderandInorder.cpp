#include<iostream>
#include<queue>
#include<vector>
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
int position(vector<int>& inorder, int val, int iS, int iE)
    {
        for(int i=0; i<=iE; i++)
        {
            if(inorder[i] == val)
                return i;
        }
        return -1;
    }
    Node* tree(vector<int>& preorder, vector<int>& inorder, int &pS
    , int iS, int iE)
    {
        //Base Case
        if(iS > iE || pS >= preorder.size())
            return NULL;
        
        int val = preorder[pS++];
        Node* root = new Node(val);

        //Searching
        int pos = position(inorder, val, iS, iE);
        root->left = tree(preorder, inorder, pS, iS, pos - 1);
        root->right = tree(preorder, inorder, pS, pos + 1, iE);

        return root;
    }
    Node* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pS = 0;
        int iS = 0;
        int iE = inorder.size();
        
        return tree(preorder, inorder, pS, iS, iE);
    }
int main()
{
    Node* root = NULL;
    vector<int> preorder;
    vector<int> inorder;
    preorder.push_back(3);
    preorder.push_back(9);
    preorder.push_back(20);
    preorder.push_back(15);
    preorder.push_back(7);

    inorder.push_back(9);
    inorder.push_back(3);
    inorder.push_back(15);
    inorder.push_back(20);
    inorder.push_back(7);
    root = buildTree(preorder, inorder);
    //Traversal
    levelTreeTraversal(root);
    
      
}