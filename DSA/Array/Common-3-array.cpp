#include <bits/stdc++.h>
using namespace std;

void common(int a[], int b[], int c[], int n1, int n2, int n3)
{
    unordered_map<int, int> m1, m2, m3;
    for (int i = 0; i < n1; i++)
        m1[a[i]]++;
    for (int i = 0; i < n1; i++)
        m2[b[i]]++;
    for (int i = 0; i < n1; i++)
        m3[c[i]]++;
    vector<int> v;

    for (int i = 0; i < n1; i++)
        if (m1[a[i]] && m2[a[i]] && m3[a[i]])
        {
            v.push_back(a[i]);
            m1[a[i]] = 0;
        }
    for (auto x : v)
        cout << x << " ";
}
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a[n1], b[n2], c[n3];
    for (int i = 0; i < n1; i++)
        cin >> a[i];
    for (int i = 0; i < n2; i++)
        cin >> b[i];
    for (int i = 0; i < n2; i++)
        cin >> c[i];
    common(a, b, c, n1, n2, n3);
    return 0;
}