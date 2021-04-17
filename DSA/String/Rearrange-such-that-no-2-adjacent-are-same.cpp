#include <bits/stdc++.h>
using namespace std;

bool rearrange(string s, int n)
{
    unordered_map<int, int> mp;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
        mx = max(mx, mp[s[i]]);
    }
    if (mx <= n - mx - 1)
        return 1;
    return 0;
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    cout << rearrange(s, n);
    return 0;
}