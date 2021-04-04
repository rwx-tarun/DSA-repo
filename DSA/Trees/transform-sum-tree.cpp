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

int sumTree(Node *root)
{
    if (!root)
        return 0;
    int x = sumTree(root->left);
    int y = sumTree(root->right);
    int z = root->key;
    root->key = x + y;
    return x + y + z;
}

int main()
{

    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->right->left = new Node(30);
    root->right->right = new Node(35);

    cout << sumTree(root);
    return 0;
}