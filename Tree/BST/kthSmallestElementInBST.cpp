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
int kthSmallest(Node *root, int k)
{
    int cnt = 0;
    int ksmall = INT_MIN;
    Node *curr = root;
    while (curr)
    {
        if (curr->left == NULL)
        {
            cnt++;
            if (cnt == k)
                ksmall = curr->data;
            curr = curr->right;
        }
        else
        {
            Node *pre = curr->left;
            while (pre->right != NULL && pre->right != curr)
                pre = pre->right;

            if (pre->right == NULL)
            {
                pre->right = curr;
                curr = curr->left;
            }
            else
            {
                pre->right = NULL;
                cnt++;
                if (cnt == k)
                    ksmall = curr->data;
                curr = curr->right;
            }
        }
    }
    return ksmall;
}

int main()
{
    Node *root = NULL;
    createBST(root);
    levelTreeTraversal(root);
    cout << endl;

    cout << "Smallest Element: " << kthSmallest(root, 3);
    cout << endl;
}