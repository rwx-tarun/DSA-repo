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
Node *mirror(Node *root)
{
    if (root == NULL)
        return root;
    Node *temp = root->left;
    root->left = root->right;
    root->right = temp;
    if (root->left)
        mirror(root->left);
    if (root->right)
        mirror(root->right);
    return root;
}

void levelOrder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->key << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
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
    levelOrder(root);
    cout << endl;
    Node *res = mirror(root);
    levelOrder(res);

    return 0;
}
