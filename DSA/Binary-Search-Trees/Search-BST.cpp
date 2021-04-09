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

bool search(Node *root, int x)
{
    if (!root)
        return false;
    if (root->key == x)
        return true;
    else if (root->key > x)
        return search(root->left, x);
    else
        return search(root->right, x);
}

int main()
{
    Node *root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(4);
    root->left->left = new Node(5);
    root->left->right = new Node(6);
    root->right->left = new Node(7);
    int x;
    cin >> x;
    cout << search(root, x);
    return 0;
}
