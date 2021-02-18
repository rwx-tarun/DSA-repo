#include<bits/stdc++.h>
using namespace std;

int count(int a[],int n,int s)
{
    if(s==0) return 1;
    if(n==0) return 0;
    int res=count(a,n-1,s);
    if(s>=a[n-1])
    {
        res=res+count(a,n,s-a[n-1]);
    }
    return res;



}

int main ()
{   int sum, n;
    cin>>n;
    cin>>sum;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<count(a,n,sum);    
    return 1;
}