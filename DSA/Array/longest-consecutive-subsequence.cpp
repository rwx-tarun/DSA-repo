#include <bits/stdc++.h>
using namespace std;

int longestConsecutiveSub(int a[], int n)
{
    unordered_set<int> s;
    int res = 0;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);
    for (int i = 0; i < n; i++)
    {
        if (s.find(a[i] - 1) == s.end())
        {
            int curr = 1;
            while (s.find(a[i] + curr) != s.end())
                curr++;
            res = max(res, curr);
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << longestConsecutiveSub(a, n);

    return 0;
}