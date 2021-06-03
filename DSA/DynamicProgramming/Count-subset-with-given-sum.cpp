#include <bits/stdc++.h>
using namespace std;

int countRecursive(int a[], int n, int sum) //recursive
{
    if (sum == 0)
        return 1;
    if (n < 0 || sum < 0)
        return 0;

    else
    {
        if (a[n - 1] > sum)
            return countRecursive(a, n - 1, sum);
        else
        {
            return (countRecursive(a, n - 1, sum) + countRecursive(a, n - 1, sum - a[n - 1]));
        }
    }
}

int countDP(int a[], int n, int sum)
{
    int dp[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;
    for (int j = 1; j <= sum; j++)
        dp[0][j] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (a[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - a[i - 1]];
            }
        }
    }
    return dp[n][sum];
}

int main()
{
    int n, sum;
    cin >> n >> sum;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << countDP(a, n, sum);

    return 0;
}
