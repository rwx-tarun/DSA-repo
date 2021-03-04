#include<bits/stdc++.h>
using namespace std;



int maxGuest(int arr[],int dep[],int n)
{   
    sort(arr,arr+n);
    sort(dep,dep+n);

    int i=1;
    int j=0;
    int res=1;
    int curr=1;
    while(i<n&&j<n)
    {
        if(arr[i]<dep[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        res=max(res,curr);
    }
    return res;
}


int main()
{
    int n;
    cin>>n;
    int ar[n];
    int dep[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        cin>>dep[i];
    }
    cout<<maxGuest(ar,dep,n);
    return 0;   
}
