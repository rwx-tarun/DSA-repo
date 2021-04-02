#include <bits/stdc++.h>
using namespace std;

void common(int a[], int b[], int c[], int n1, int n2, int n3)
{
    int i, j, k;
    i = j = k = 0;
    vector<int> v;
    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            v.push_back(a[i]);
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[k])
            j++;
        else
            k++;

        int x = a[i - 1];
        while (a[i] == x)
            i++;
        int y = b[j - 1];
        while (b[j] == y)
            j++;
        int z = c[k - 1];
        while (c[k] == z)
            k++;
    }
    for (auto x : v)
        cout << x;
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