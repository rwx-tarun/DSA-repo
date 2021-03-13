#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        int l = 1;
        int h = 1e9;
        int res = 0;

        while (l <= h)
        {
            int cow = 1;
            int prev = a[0];
            int mid = (l + h) / 2;
            for (int i = 1; i < n; i++)
            {
                if (a[i] - prev >= mid)
                {
                    cow++;
                    prev = a[i];
                    if (cow == c)
                        break;
                }
            }
            if (c == cow)
            {
                res = mid;
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}