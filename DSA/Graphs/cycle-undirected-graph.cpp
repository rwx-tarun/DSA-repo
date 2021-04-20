#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool DFS(vector<int> adj[], int s, bool visited[], int parent)
{
    visited[s] = true;
    queue<int> q;
    q.push(s);
    for (int x : adj[s])
    {
        if (visited[x] == false)
        {
            if (DFS(adj, x, visited, s) == true)
                return true;
        }
        else if (x != parent)
            return true;
    }
    return false;
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
    for (int i = 0; i < v; i++)
        if (visited[i] == false)
            if (DFS(adj, i, visited, -1) == true)
                cout << "True";
            else
                cout << "False";
    return 0;
}