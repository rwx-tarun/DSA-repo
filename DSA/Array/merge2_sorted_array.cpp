#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[],int arr2[],int n,int m)
{
    int i,j;
    i=n-1;
    j=0;
    while(i>=0&&j<m)
    {
        if(arr1[i]>=arr2[j])
        {
            int temp=arr1[i];
            arr1[i]=arr2[j];
            arr2[j]=temp;
            i--;
            j++;
        } 
        else {
            break;
        }
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
}




int main()
{
    int n,m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<m;j++)
        cin>>b[j];
    sort(a,a+n);
    sort(b,b+m);    
    merge(a,b,n,m); 
    for(int i=0;i<n;i++)
        cout<<a[i];

    cout<<endl;
    cout<<endl;    
    for(int j=0;j<m;j++)
        cout<<b[j];       
}
