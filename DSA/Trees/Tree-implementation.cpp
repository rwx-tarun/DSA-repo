#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

    void display(Node *root)
    { 
        if(root!=NULL)
        {
            display(root->left);
            cout<<root->key<<" ";
            display(root->right);
        }
    }
int main()
{
    Node *root = new Node(4);
    root->left = new Node(3);
    root->right=new Node(2);
    display(root);
    return 0;

}
