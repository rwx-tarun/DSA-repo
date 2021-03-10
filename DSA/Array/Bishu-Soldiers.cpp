#include <bits/stdc++.h>
using namespace std;

int binary(int a[], int n, int p)
{
    int l, h, res;
    l = 0;
    h = n - 1;
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (a[m] == p)
        {
            res = m + 1;
            l = m + 1;
        }
        else if (a[m] > p)
        {
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return res;
}

int main()
{
    int n, test, power, ans;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    cin >> test;
    while (test--)
    {
        int sum = 0;
        cin >> power;
        if (a[0] > power)
        {
            cout << "0 0";
            continue;
        }
        else if (a[n - 1] < power)
        {
            ans = n;
        }
        else
        {
            ans = binary(a, n, power);
        }
        for (int i = 0; i < ans; i++)
            sum = sum + a[i];
        cout << ans << " " << sum << endl;
    }
}