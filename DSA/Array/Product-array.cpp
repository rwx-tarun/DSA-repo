#include <bits/stdc++.h>
using namespace std;

void productArray(int a[], int n)
{
    int lf[n];
    int rt[n];
    int ans[n];
    lf[0] = 1;
    rt[n - 1] = 1;

    for (int i = 1; i < n; i++)
        lf[i] = lf[i - 1] * a[i - 1];
    for (int i = n - 2; i >= 0; i--)
        rt[i] = rt[i + 1] * a[i + 1];
    for (int i = 0; i < n; i++)
        ans[i] = lf[i] * rt[i];
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    productArray(a, n);
    return 0;
}