#include<bits/stdc++.h>
using namespace std;

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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x;
    cin>>x;

    cout<<last(a,n,x);
    return 0;

}
