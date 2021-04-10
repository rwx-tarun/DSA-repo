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
bool BST(Node *root, int mx, int mn)
{
    if (root == NULL)
        return true;
    return (root->key > mn && root->key < mx && BST(root->left, root->key, mn) && BST(root->right, mx, root->key));
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
    cout << BST(root, INT_MAX, INT_MIN);
    return 0;
}