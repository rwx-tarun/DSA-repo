#include <bits/stdc++.h>
using namespace std;
void add(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int v = 4;
    vector<int> adj[v];
    add(adj, 0, 1);
    add(adj, 0, 2);
    add(adj, 1, 2);
    add(adj, 1, 3);
    return 0;
}
