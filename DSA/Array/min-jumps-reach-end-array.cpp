#include <bits/stdc++.h>
using namespace std;

int minJumps(int a[], int n)
{
    int maxreach = a[0];
    int steps = a[0];
    int jumps = 1;
    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jumps;
        maxreach = max(maxreach, a[i] + i);
        steps--;
        if (steps == 0)
        {
            jumps++;
            if (i >= maxreach)
                return -1;
            steps = maxreach - i;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        a[i] = c;
    }
    cout << minJumps(a, n);
}
