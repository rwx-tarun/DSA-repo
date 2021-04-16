#include <bits/stdc++.h>
using namespace std;

vector<int> kLargest(int a[], int n, int k, vector<int> &v)
{
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i < n; i++)
    {
        q.push(a[i]);
        if (k < q.size())
        {
            q.pop();
        }
    }
    while (q.size() > 0)
    {
        v.push_back(q.top());
        q.pop();
    }
    reverse(v.begin(), v.end());
    return v;
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> v;
    kLargest(a, n, k, v);
    for (auto x : v)
        cout << x << " ";
    return 0;
}