#include <bits/stdc++.h>
using namespace std;

void heapify(int a[], int n, int i)
{
    int largest = i;
    int lf = 2 * i + 1;
    int rt = 2 * i + 2;
    if (lf < n && a[largest] < a[lf])
        largest = lf;
    if (rt < n && a[largest] < a[rt])
        largest = rt;
    if (largest != i)
    {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void build(int a[], int n)
{
    int t = (n / 2) - 1;
    for (int i = t; i >= 0; i--)
    {
        heapify(a, n, i);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    build(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
