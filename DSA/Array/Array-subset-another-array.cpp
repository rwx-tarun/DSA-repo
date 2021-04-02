#include <bits/stdc++.h>
using namespace std;

bool subset(int a[], int b[], int n, int m)
{
    unordered_map<int, int> s;
    int cnt = 0;
    for (int i = 0; i < n; i++)
        s[a[i]]++;
    for (int i = 0; i < m; i++)
    {
        if (s[b[i]])
            cnt++;
    }

    if (cnt != m)
        return false;
    else
        return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    bool res = subset(a, b, n, m);
    cout << res;
    return 0;
}