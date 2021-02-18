#include<bits/stdc++.h>
using namespace std;


int stock(int a[],int n)
{
    int mn=INT_MAX;
    int profit=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]<mn)
            mn=a[i];
        if(profit<a[i]-mn)
            profit=a[i]-mn;    
    }
    return profit;

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<stock(a,n);    
    return 1;

}