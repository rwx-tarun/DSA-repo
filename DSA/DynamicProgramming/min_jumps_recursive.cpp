#include<bits/stdc++.h>
using namespace std;

int minJump(int a[],int n)
{   
    if(n==1) return 0;
    int res =INT_MAX;
    for(int i=0;i<=n-2;i++)
    {
        if(i+a[i]>=n-1)
        {
            int subres=minJump(a,i+1);
            if(subres!=INT_MAX)
            {
                res=min(subres+1,res);
            }
        }
    }
    return res;
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
