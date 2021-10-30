#include<bits/stdc++.h>

using namespace std;

int solve(int n)
{
    vector<int>p(n+1,1);
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        {
            for(int j =i*i;j<=n;j=j+i)
            {
                p[j]=0;
            }
        }
    }
    int cnt =0;
    for(int i =2;i<=n;i++)
    {
       if(p[i]==1)
            cnt++;
    }
    return cnt;
    
}
    
