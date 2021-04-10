#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
void display(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        Node *c = q.front();
        q.pop();
        cout << c->key << " ";
        if (c->left != NULL)
            q.push(c->left);
        if (c->right != NULL)
            q.push(c->right);
    }
}

Node *insert(Node *root, int x)
{
    if (!root)
        return new Node(x);
    else if (root->key > x)
        root->left = insert(root->left, x);
    else if (root->key < x)
        root->right = insert(root->right, x);
    return root;
}

int main()
{
    Node *root = new Node(30);
    root->left = new Node(20);
    root->right = new Node(50);
    root->left->left = new Node(10);
    root->left->right = new Node(25);
    root->right->left = new Node(35);
    int x;
    cin >> x;
    cout << insert(root, x);
    display(root);
    return 0;
}