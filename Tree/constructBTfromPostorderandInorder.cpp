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
        for(int i = iE; i >= 0; i--)
        {
            if(inorder[i] == val)
                return i;
        }
        return -1;
    }
    Node* tree(vector<int>& inorder, vector<int>& postorder, int iS,
    int iE, int &pE)
    {
        //Base Case
        if(iS>iE || 0 > pE)
            return NULL;
        
        //Add Value
        int val = postorder[pE--];
        Node* root = new Node(val);
        //Searching
        int pos = position(inorder, val, iS, iE);
        root->right = tree(inorder, postorder, pos + 1, iE, pE);
        root->left = tree(inorder, postorder, iS, pos - 1, pE);

        return root;
    }
    Node* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int iS = 0;
        int iE = inorder.size() - 1;
        int pE = postorder.size() - 1;
        
        return tree(inorder, postorder, iS, iE, pE);
    }
int main()
{
    Node* root = NULL;
    vector<int> postorder;
    vector<int> inorder;
    postorder.push_back(3);
    postorder.push_back(9);
    postorder.push_back(20);
    postorder.push_back(15);
    postorder.push_back(7);

    inorder.push_back(9);
    inorder.push_back(3);
    inorder.push_back(15);
    inorder.push_back(20);
    inorder.push_back(7);
    root = buildTree(postorder, inorder);
    //Traversal
    levelTreeTraversal(root);
    
      
}