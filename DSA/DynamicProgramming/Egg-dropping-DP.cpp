#include<bits/stdc++.h>
using namespace std;

int eggDrop(int f,int e)
{
    int dp[f+1][e+1];
    for(int i=1;i<=e;i++)
    {
        dp[1][i]=1;
        dp[0][i]=0;
    }
    for(int j=1;j<=f;j++)
        dp[j][1]=j;

    for(int i=2;i<=f;i++)
    {
        for(int j=2;j<=e;j++)
        {
            dp[i][j]=INT_MAX;
            for(int x=1;x<=f;x++)
            {
                dp[i][j]=min(dp[i][j],1+max(dp[x-1][j-1],dp[i-x][j]));
            }
        }
    }
    return dp[f][e];

}



int main()
{
    int f,e;
    cin>>f;
    cin>>e;
    cout<<eggDrop(f,e);

}