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

int maxBTree(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    else
        return max(root->key, max(maxBTree(root->left), maxBTree(root->right)));
}

int main()
{
    Node *root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(4);
    root->left->left = new Node(5);
    root->left->right = new Node(6);
    root->right->left = new Node(7);
    cout << maxBTree(root);
    return 0;
}