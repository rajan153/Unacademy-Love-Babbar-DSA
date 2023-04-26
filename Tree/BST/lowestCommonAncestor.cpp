#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildBST(Node *root, int data)
{
    if (root == NULL)
    {
        Node *newNode = new Node(data);
        return newNode;
    }
    if (data > root->data)
        root->right = buildBST(root->right, data);
    else
        root->left = buildBST(root->left, data);

    return root;
}

void createBST(Node *&root)
{
    cout << "Enter the value of Root Node: " << endl;
    int data;
    cin >> data;

    while (data != -1)
    {
        root = buildBST(root, data);
        cout << "Enter the data for Node: " << endl;
        cin >> data;
    }
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
// T.C. - O(N)
// S.C. - O(N)
Node *lowestCommonAncestor(Node *root, Node *p, Node *q)
{
    if (root == NULL)
        return NULL;
    if (root->data < p->data && root->data < q->data)
        return lowestCommonAncestor(root->right, p, q);
    if (root->data > p->data && root->data > q->data)
        return lowestCommonAncestor(root->left, p, q);
    else
        return root;
}

// T.C. - O(N)
// S.C. - O(1)
// Node *lowestCommonAncestor(Node *root, Node *p, Node *q)
// {
//     if (root == NULL)
//         return NULL;
//     while (root != NULL)
//     {
//         if (root->data < p->data && root->data < q->data)
//             root = root->right;
//         else if (root->data > p->data && root->data > q->data)
//             root = root->left;
//         else
//             break;
//     }
//     return root;
// }
int main()
{
    Node *root = NULL;
    createBST(root);
    levelTreeTraversal(root);
    cout << endl;
    Node *p = new Node(2);
    Node *q = new Node(4);
    cout << "Lowest Ancestor: " << endl;
    // INPUT:- 6 2 8 0 4 7 9 3 5 -1
    Node *t = lowestCommonAncestor(root, p, q);
    cout << t->data;
    cout << endl;
}