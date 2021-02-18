#include<bits/stdc++.h>
using namespace std ;

int Kadane(int a[],int n)
{
    int local,global;
    local=global=INT_MIN;
    for(int i=0;i<n;i++)
    {
        local=max(a[i],local+a[i]);
        global=max(global,local);
    }
    return global;
}

int main ()
{   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        a[i]=c;   
    }
    cout<<Kadane(a,n);



} 
