#include<bits/stdc++.h>
using namespace std;

vector<int> solve(int n)
{
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j=j+i)
        {
            v[j]++;
        }
    }
    return v;
}


int main()
{
    int n;
    cin>>n;
    vector<int>v=solve(n);
    for(int x : v)
        cout<<x<<' ';
}
