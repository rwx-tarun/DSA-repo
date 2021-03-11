#include <bits/stdc++.h>
using namespace std;
int pivot(int a[], int n)
{
    if (a[0] < a[n - 1])
        return a[n - 1];
    if (n == 2)
        return max(a[1], a[0]);
    else
    {
        int l, h;
        l = 0;
        h = n - 1;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (a[mid] > a[mid - 1])
            {
                return mid;
            }
            else if (a[l] <= a[mid])
                l = mid + 1;
            else
            {
                h = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << pivot(a, n);
    return 0;
}