#include<bits/stdc++.h>
using namespace std;

int majority(int a[],int n)
{
    int count =0;
    int curr;
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            curr=a[i];
            count++;
        }
        else if(a[i]==curr)
            count++;
        else
            count--;

    }  

    return curr;      


    return count;
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