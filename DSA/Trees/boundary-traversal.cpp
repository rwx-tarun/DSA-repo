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

void left(Node *root, vector<int> &res)
{
    if (!root)
        return;
    if (root->left)
    {
        res.push_back(root->key);
        left(root->left, res);
    }
    else if (root->right)
    {
        res.push_back(root->key);
        left(root->right, res);
    }
}

void leaf(Node *root, vector<int> &res)
{
    if (!root)
        return;
    leaf(root->left, res);
    if (root->left == NULL && root->right == NULL)
        res.push_back(root->key);
    leaf(root->right, res);
}

void right(Node *root, vector<int> &res)
{
    if (!root)
        return;
    if (root->right != NULL)
    {
        right(root->right, res);
        res.push_back(root->key);
    }
    else if (root->left != NULL)
    {
        right(root->left, res);
        res.push_back(root->key);
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
    root->right->right = new Node(8);
    vector<int> res;
    res.push_back(root->key);
    left(root->left, res);
    leaf(root, res);
    right(root->right, res);
    for (auto x : res)
        cout << x << " ";

    return 0;
}
