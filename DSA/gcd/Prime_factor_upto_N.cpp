#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{   
    vector<vector<int>>v(n+1,vector<int>(n+1,0));
    for(int i=2;i<=n;i++)
    {   
        if(v[i].empty()==true)
        {
            for(int j =i;j<=n;j=j+i)
            {
                v[j].push_back(i);     
            }
        }
    }
    
    
    for(auto x : v)
    {
        for(auto y : x)
            cout<<y<<" ";
        cout<<endl;
    }
}


int main()
{
    int n;
    cin>>n;
    solve(n);
}
