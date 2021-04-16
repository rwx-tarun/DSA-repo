#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int a[], int n, int k)
{
    priority_queue<int> q;
    for (int i = 0; i < n; i++)
    {
        q.push(a[i]);
        if (k < q.size())
        {
            q.pop();
        }
    }
    return q.top();
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << kthSmallest(a, n, k);

    return 0;
}