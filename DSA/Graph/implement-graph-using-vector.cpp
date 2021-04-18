#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print(vector<int> adj[], int v)
{
    for (int i = 0; i < v; i++)
    {
        for (int x : adj[i])
            cout << x << " ";
        cout << "\n";
    }
}

int main()
{
    int v = 5;
    vector<int> adj[v];
    insert(adj, 0, 1);
    insert(adj, 0, 2);
    insert(adj, 0, 3);
    insert(adj, 4, 3);
    insert(adj, 1, 3);
    insert(adj, 3, 4);
    insert(adj, 2, 4);
    print(adj, v);
    return 0;
}
