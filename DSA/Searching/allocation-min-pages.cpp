#include <bits/stdc++.h>
using namespace std;

bool isValid(int a[], int n, int m, int mid)
{
    int student = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mid)
            return false;
        if (sum + a[i] > mid)
        {
            student++;
            sum = a[i];
            if (student > m)
                return false;
        }
        else
            sum += a[i];
    }
    return true;
}

int allocateMinPages(int a[], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    int low = 0;
    int res = -1;
    int high = sum;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (isValid(a, n, m, mid) == true)
        {
            res = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int m;
    cin >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << allocateMinPages(a, n, m);
    return 0;
}