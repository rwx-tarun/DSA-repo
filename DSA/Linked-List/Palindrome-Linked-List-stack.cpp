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

bool ispal(Node *head)
{
    stack<int> s;
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        s.push(slow->data);
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast != NULL)
        slow = slow->next;

    while (slow)
    {
        if (slow->data != s.top())
            return false;
        s.pop();
        slow = slow->next;
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