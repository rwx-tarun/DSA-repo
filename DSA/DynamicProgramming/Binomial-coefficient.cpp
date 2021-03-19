#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{

    if (r > n)
        return 0;

    int dp[1001][801];
    memset(dp, 0, sizeof(dp));
    int mod = pow(10, 9) + 7;
    dp[0][0] = 1;

    for (int i = 1; i <= r; i++)
    {
        dp[0][i] = 0;
    }
    for (int j = 1; j <= n; j++)
    {
        dp[j][0] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= min(i, r); j++)
        {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % mod;
        }
    }
    return dp[n][r];
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r);
    return 0;
}
