#include<bits/stdc++.h>
using namespace std;


int getMin(int a[],int n,int val)
{
    int res=INT_MAX;
    if(val==0) return 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=val)
        {
            int sub_res=min(res,getMin(a,n-1,val-a[i]));
            if(sub_res!=INT_MAX)
            res=min(res,sub_res+1);
        }
    }
    return res;
}


int  main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int val;
    cin>>val;
    cout<<getMin(a,n,val);
    return 0;

}