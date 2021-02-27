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

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x;
    cin>>x;

    cout<<first(a,n,x);
    return 0;

}
