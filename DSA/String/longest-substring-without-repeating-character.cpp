#include <bits/stdc++.h>
using namespace std;

int longestNonRepeating(string s)
{
    unordered_map<char, int> mp;
    int start = 0;
    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (mp.find(s[i]) != mp.end())
            start = mp[s[i]];
        mp[s[i]] = i;
        res = max(res, i - start);
    }
    return res;
}

int main()
{

    string s;
    cin >> s;
    cout << len(s);
    return 0;
}