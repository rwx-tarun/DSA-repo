#include<bits/stdc++.h>
using namespace std;


void merge(int a[],int l,int m,int h)
{
    int n1=m-l+1;
    int n2=h-m;
    int lf[n1];
    int rt[n2];
    for(int i=0;i<n1;i++)   lf[i]=a[l+i];
    for(int i=0;i<n2;i++)   rt[i]=a[m+1+i];

    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(lf[i]>=rt[j])    {   a[k]=rt[j];    k++;    j++; }
        else 
        {   a[k]=lf[i];    k++;    i++;  } 

    }
    while(i<n1)     {   a[k]=lf[i];    k++;     i++;    }
    while(j<n2)     {   a[k]=rt[j];    k++;     j++;    }

}



void mergeSort(int a[],int low,int high)
{
    if(high>low)
    {   int mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);

    }
}




int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int low,high;
    low=0;
    high=n-1;
    mergeSort(a,low,high);
    for(int t=0;t<n;t++)
        cout<<a[t];
    return 0;

}