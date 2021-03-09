#include <bits/stdc++.h>
using namespace std;

int search(int a[], int n, int x)
{
    int m;
    int l = 0;
    int h = n - 1;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (a[m] == x)
            return m;
        else if (a[m] > a[l]) //check left half sorted
        {
            if (a[l] <= x && x <= a[m]) //x in left range(l,m)
                h = m - 1;
            else
                l = m + 1;
        }
        else
        {
            if (a[m] <= x && x <= a[h])
                l = m + 1;
            else
                h = m - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int x;
    cin >> x;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << search(a, n, x);

    return 0;
}