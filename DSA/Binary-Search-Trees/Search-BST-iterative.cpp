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
    while (root != NULL)
    {
        if (root->key == x)
            return true;
        else if (root->key > x)
            root = root->left;
        else
            root = root->right;
    }
    return false;
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
    cout << search(root, x);
    return 0;
}