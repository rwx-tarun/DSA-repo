#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int n,int x)
{
    int l,h,m;
    l=0;
    h=n-1;
    while(l<=h)
    {
        m=(h+l)/2;
        if(x==a[m]) 
            return m;
        else if(x>a[m]) 
            l=m+1;
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

    cout<<binarySearch(a,n,x);
    return 0;

}
