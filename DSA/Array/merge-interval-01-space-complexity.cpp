#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    int j = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[j][1] >= v[i][0])
        {
            v[j][1] = max(v[j][1], v[i][1]);
        }
        else
        {
            j++;
            v[j][0] = v[i][0];
            v[j][1] = v[i][1];
        }
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i][0] << " " << v[i][1] << endl;
    return 0;
}
