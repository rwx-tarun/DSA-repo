#include <bits/stdc++.h>
using namespace std;

int maxSum(int a[], int n)
{
    if (n == 0)
        return a[0];
    if (n == 1)
        return max(a[0], a[1]);
    return max(maxSum(a, n - 1), a[n] + maxSum(a, n - 2));
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << maxSum(a, n - 1);
    return 0;
}
