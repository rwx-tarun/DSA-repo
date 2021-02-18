#include<bits/stdc++.h>
using namespace std;

void findDuplicate(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int index=abs(a[i]-1);
        a[index]*=(-1);
        if(a[index]>0)
            cout<<a[index];

    }
}


int main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    findDuplicate(a,n);
    return 1;

}