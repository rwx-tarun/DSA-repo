#include<bits/stdc++.h>
using namespace std;

int majority(int a[],int n)
{
    int count =1;
    int curr=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]==curr) {count++;}
        else    count--;
        if(count==0)
        {
            curr=a[i];
            count=1;
        }
    }  
    count =0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==curr) count++;

    }
    if(count>n/2) return curr;
    else
        return -1;      

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<majority(a,n);
    return 0;

}