#include <bits/stdc++.h>
using namespace std;

int minSubarray(int a[], int n, int sum)
{
    int j = 0, pre = 0;
    int res = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        pre = pre + a[i];
        while (pre > sum)
        {
            res = min(res, i + 1 - j);
            pre = pre - a[j++];
        }
    }
    return (res != INT_MAX ? res : 0);
}

int main()
{
    int n, sum;
    cin >> n;
    int a[n];
    cin >> sum;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << minSubarray(a, n, sum);
    return 0;
}