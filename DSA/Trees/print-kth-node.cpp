#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};
void kthNode(Node *root, int k)
{
    if (root == NULL)
        return;

    if (k == 0)
    {
        cout << root->key << " ";
    }
    else
    {
        kthNode(root->left, k - 1);
        kthNode(root->right, k - 1);
    }
}

int main()
{
    Node *root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(4);
    root->left->left = new Node(5);
    root->left->right = new Node(6);
    root->right->left = new Node(7);
    int k;
    cin >> k;
    kthNode(root, k);
    return 0;
}