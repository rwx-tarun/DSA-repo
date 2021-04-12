#include <bits/stdc++.h>
using namespace std;

int countPair(int a[], int n, int sum)
{
    unordered_map<int, int> m;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (m.find(sum - a[i]) != m.end())
        {
            cnt += m[sum - a[i]];
        }
        m[a[i]]++;
    }
    return cnt;
}

int main()
{
    int n, sum;
    cin >> n;
    cin >> sum;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << countPair(a, n, sum);
    return 0;
}