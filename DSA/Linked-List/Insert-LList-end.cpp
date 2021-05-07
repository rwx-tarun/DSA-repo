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

Node *insert(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;

    else
    {
        Node *curr = head;
        while (curr->next != NULL)
            curr = curr->next;
        curr->next = temp;
        return head;
    }
}

void display(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
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
    int x;
    cin >> x;
    Node *t = insert(head, x);
    display(t);
    return 0;
}