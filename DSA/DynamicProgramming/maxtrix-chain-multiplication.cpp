#include <bits/stdc++.h>
using namespace std;

int solveMCM(int a[], int i, int j)
{

    if (i > j)
        return 0;
    int mn = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        int temp = solveMCM(a, i, k) + solveMCM(a, k + 1, j) + (a[i - 1] * a[k] * a[j]);
        if (temp < mn)
            mn = temp;
    }
    return mn;
}

int main()
{
    int n;
    int a[n];
    cout << solveMCM(a, 0, n - 1);
    return 0;
}