#include<bits/stdc++.h>
using namespace std;

int editDistance(string s,string l,int n , int m)
{
    int dp[m+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0) dp[i][j]=j;
            else if (j==0) dp[i][j]=i;
            else if(s[i-1]==l[j-1])
            dp[i][j]=dp[i-1][j-1];
            else 
            dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));

        }
    }
    return dp[n][m];
}




int main()
{
    string s,l;
    getline(cin,s);
    getline(cin,l);
    int n,m;
    n=s.length();
    m=l.length();
    cout<<editDistance(s,l,n,m);
}