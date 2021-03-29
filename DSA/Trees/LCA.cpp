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

Node *LCA(Node *root, int m, int n)
{
    if (root == NULL)
        return NULL;
    if (root->key == m || root->key == n)
        return root;
    Node *l1 = LCA(root->left, m, n);
    Node *l2 = LCA(root->right, m, n);
    if (l1 != NULL && l2 != NULL)
        return root;
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;
}

int main()
{
    Node *root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(4);
    root->left->left = new Node(5);
    root->left->right = new Node(6);
    root->right->left = new Node(7);
    int n, m;
    cin >> n;
    cin >> m;

    cout << LCA(root, m, n);
}