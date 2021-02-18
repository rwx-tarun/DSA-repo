#include<bits/stdc++.h>
using namespace std;

int lis(int a[],int n)
{
    int l[n];
    for(int i=0;i<n;i++)
        l[i]=1;
    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
                l[i]=max(l[i],1+l[j]);
            }

        }
    }
    int mx=0;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,l[i]);        
    }
    return mx;
}



int main ()
{   int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<lis(a,n);
}