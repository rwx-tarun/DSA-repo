#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFS(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;
    cout << s << " ";
    for (int x : adj[s])
    {
        if (visited[x] == false)
            DFS(adj, x, visited);
    }
}

int main()
{
    int v = 5;
    vector<int> adj[v];
    insert(adj, 0, 1);
    insert(adj, 0, 2);
    insert(adj, 1, 2);
    insert(adj, 2, 3);
    insert(adj, 1, 3);
    insert(adj, 3, 4);
    insert(adj, 2, 4);

    bool visited[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;
    int s = 0;
    DFS(adj, s, visited);
    return 0;
}