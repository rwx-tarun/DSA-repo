#include<bits/stdc++.h>
using namespace std;

int minJump(int a[],int n)
{   
    int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++)
        dp[i]=INT_MAX;


    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(j+a[j]>=i)
            {
                if(dp[j]!=INT_MAX)
                    dp[i]=min(dp[i],dp[j]+1);
            }
        }
    } 
    return dp[n-1];      
}

int main ()
{   int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<minJump(a,n);    
    return 0;
}