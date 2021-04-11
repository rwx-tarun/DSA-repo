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

int kthLargest(Node *root, int &k)
{
    if (root == NULL)
        return 0;

    int left = kthLargest(root->left, k);
    if (left)
        return left;
    k--;
    if (k == 0)
    {
        return root->key;
    }
    int right = kthLargest(root->right, k);
    return right;
}
int main()
{
    Node *root = new Node(30);
    root->left = new Node(20);
    root->right = new Node(50);
    root->left->left = new Node(10);
    root->left->right = new Node(25);
    root->right->left = new Node(35);
    int k;
    cin >> k;
    cout << kthLargest(root, k);
    return 0;
}