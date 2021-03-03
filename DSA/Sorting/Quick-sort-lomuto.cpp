#include<bits/stdc++.h>
using namespace std;

int lomuto(int a[],int l,int r)
{
    int i=l-1;
    int pivot = a[r];
    for(int j=l;j<r-1;j++)
    {
        if(pivot>=a[j])
        {
            i++;
            int t=a[j];
            a[j]=a[i];
            a[i]=t;
        }
    
    }
    int temp=a[r];
    a[r]=a[i+1];
    a[i+1]=temp;
    return i+1;

}

void quickSort(int a[],int l,int r)
{
    if(r>l)
    {
        int pivot=lomuto(a,l,r);
        quickSort(a,l,pivot-1);
        quickSort(a,pivot+1,r);        

    }
}




int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i];
    return 0;  
}    