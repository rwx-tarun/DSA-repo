#include <bits/stdc++.h>
using namespace std;

bool subsetSum(int a[], int n, int sum)
{
    bool dp[n + 1][sum + 1];

    for (int j = 1; j <= sum; j++)
        dp[0][j] = false;

    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {

            if (a[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            if (j >= a[i - 1])
            {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i - 1]];
            }
        }
    }
    return dp[n][sum];
}

int main()
{
    int n;
    cin >> n;
    int sum;
    cin >> sum;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << subsetSum(a, n, sum);
    return 0;
}