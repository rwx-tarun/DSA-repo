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

void serialize(Node *root, vector<int> &v)
{

    if (root == NULL)
    {
        v.push_back(-1);
        return;
    }
    v.push_back(root->key);
    serialize(root->left, v);
    serialize(root->right, v);
}

int main()
{
    Node *root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(4);
    root->left->left = new Node(5);
    root->left->right = new Node(6);
    root->right->left = new Node(7);
    vector<int> v;

    serialize(root, v);
    for (auto x : v)
        cout << x << " ";

    return 0;
}