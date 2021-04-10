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
    queue<int> q;
    q.push(root);
    while (q.empty() == false)
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->key << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}

Node *insert(Node *root, int x)
{
    Node *temp = new Node(x);
    Node *parent = NULL;
    Node *curr = root;

    while (curr != NULL)
    {
        parent = curr;
        if (curr->key > x)
            curr = curr->left;
        else if (curr->key < x)
            curr = curr->right;
        else
            return root;
    }

    if (parent == NULL)
        return new Node(x);
    else if (parent->key > x)
        parent->left = temp;
    else
        parent->right = temp;
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