#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int> adj[], int v, int s)
{
    bool visited[v + 1];
    for (int i = 0; i < v; i++)
        visited[i] = false;

    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (q.empty() == false)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        for (int a : adj[x])
        {
            if (visited[a] == false)
            {
                q.push(a);
                visited[a] = true;
            }
        }
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
    int s = 0;
    BFS(adj, v, s);
    return 0;
}