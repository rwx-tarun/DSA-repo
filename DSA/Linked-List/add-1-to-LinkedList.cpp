#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *reverse(Node *head)
{

    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node *add(Node *head)
{
    head = reverse(head);
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->next == NULL && curr->data == 9)
        {
            curr->data = 1;
            Node *t = new Node(0);
            t->next = head;
            head = t;
            curr = curr->next;
        }
        else if (curr->data == 9)
        {
            curr->data = 0;
            curr = curr->next;
        }
        else
        {
            curr->data = curr->data + 1;
            curr = curr->next;
            break;
        }
    }
    head = reverse(head);
    return head;
}

void display(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data;
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(5);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);
    Node *root = add(head);
    display(root);
    return 0;
}