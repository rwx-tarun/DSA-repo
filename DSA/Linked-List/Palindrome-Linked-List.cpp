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
    while (curr)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool ispal(Node *head)
{
    Node *slow, *fast;
    slow = head;
    fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *t = NULL;
    if (fast == NULL)
        t = reverse(slow);
    else
    {
        t = reverse(slow->next);
    }
    fast = head;
    while (t)
    {
        if (fast->data != t->data)
            return false;
        fast = fast->next;
        t = t->next;
    }
    return true;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);
    cout << ispal(head);
    return 0;
}