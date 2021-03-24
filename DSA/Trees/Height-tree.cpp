#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node* left;
    Node *right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }

};

int height(Node * root)
{
    if(root==NULL) return 0;
    if(root->left==NULL &&root->right==NULL) return 1;
    return max(height(root->right),height(root->left))+1;
}

int main()
{
    Node *root = new Node(2);
    root->left=new Node(3);
    root->right=new Node(4);
    root->left->left=new Node(5);
    root->left->right=new Node(6);
    root->right->left=new Node(7);
    cout<<height(root);
    return 0;

}
