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

int height(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(height(root->right), height(root->left));
}

bool isBalanced(Node *root)
{
    if (root == NULL)
        return true;
    int left = height(root->left);
    int right = height(root->right);
    return (abs(left - right) < 2 && isBalanced(root->left) && isBalanced(root->right));
}

int main()
{
    Node *root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(4);
    root->left->left = new Node(5);
    root->left->right = new Node(6);
    root->right->left = new Node(7);
    cout << isBalanced(root);
}