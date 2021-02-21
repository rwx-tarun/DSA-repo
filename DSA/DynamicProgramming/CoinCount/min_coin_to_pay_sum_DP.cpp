#include<bits/stdc++.h>
using namespace std;


int getMin(int a[],int n,int val)
{
    int dp[val+1];
    dp[0]=0;


    for(int i=1;i<=val;i++)
        dp[i]=INT_MAX;



    for(int i=0;i<=val;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]<=i)
            {
                int sub_res=dp[i-a[j]];
                if(sub_res!=INT_MAX)
                    dp[i]=min(dp[i],sub_res+1);
            }
        }
    }
    return dp[val];    
}


int  main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int val;
    cin>>val;
    cout<<getMin(a,n,val);
    return 0;

}