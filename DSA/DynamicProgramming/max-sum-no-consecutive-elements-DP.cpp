#include<bits/stdc++.h>
using namespace std;

int maxSum(int a[],int n)
{   if(n==1) return a[0];
    if(n==2) return max(a[0],a[1]);
    int prev_prev=a[0];
    int prev=max(a[0],a[1]);
    int res=prev;
    for(int i=3;i<=n;i++)
    {
        res=max(prev,prev_prev+a[i-1]);
        prev_prev=prev;
        prev =res;
    }
    return res;
}



int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<maxSum(a,n);
    return 1;

}