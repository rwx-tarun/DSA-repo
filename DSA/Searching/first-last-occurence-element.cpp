#include<bits/stdc++.h>
using namespace std;





int first(int a[],int n,int x)
{
    int l=0;
    int h=n-1;
    int m;
    while(l<=h)
    {
        m=(l+h)/2;
        if(a[m]<x)  
            l=m+1;
        else if(a[m]>x)     
            h=m-1;
        else if(m==0 || a[m-1]!=a[m])
            return m;
        else  
            h=m-1; 
    }
    return -1;
}

int last(int a[],int n,int x)
{
    int l=0;int mid;
    int h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]>x)
            h=mid-1;
        else if(a[mid]<x)
            l=mid+1;
        else if(mid==n-1 || a[mid+1]!=x)
            return mid;
        else l=mid+1;

    }
    return -1;
}    
    





int main()
{
    int n,b,c;
    cin>>n;
    int a[n];
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
        cin>>a[i];
        
    b=first(a,n,x);
    c=last(a,n,x);
    cout<<b<<c;

    return 0;
}