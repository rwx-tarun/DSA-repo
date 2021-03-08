#include <bits/stdc++.h>
using namespace std;
int triplet(int a[], int n, int x)
{
    int ans = 0;
    int i, j, k;
    sort(a, a + n);
    for (int i = 0; i < n - 2; i++)
    {
        j = n - 1;
        k = i + 1;
        while (k < j)
        {
            if (a[i] + a[j] + a[k] < x)
            {
                ans += (j - k);
                k++;
            }
            else
                j--;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << triplet(a, n, x);
    return 0;
}
