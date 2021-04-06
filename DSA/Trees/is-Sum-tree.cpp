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

int isSum(Node *root)
{
    if (!root)
        return 0;
    else if (root->left == NULL && root->right == NULL)
        return root->key;
    if (root->key == isSum(root->left) + isSum(root->right))
        return 2 * root->key;
    return 0;
}

bool sum(Node *root)
{
    if (root->key == isSum(root) / 2)
        return true;
    else
        return false;
}

int main()
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right = new Node(6);
    root->right->left = new Node(5);
    root->right->right = new Node(7);
    cout << sum(root);

    return 0;
}