#include<bits/stdc++.h>
using  namespace std;

void mer(int a[],int l , int m , int h)
{
    int n1=m-l+1;
    int n2=h-m;

    int left[n1];
    int right[n2];

    for(int i=0;i<n1;i++)   left[i]=a[l+i];
    for(int i=0;i<n2;i++)   right[i]=a[n1+i];
    int i,j,k;
    i=j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]>=right[j])   {a[k]=right[j]; k++;j++; }
        else 
        {
            a[k]=left[i];
            i++;
            k++;
        }

    }
    while(i<n1)  {a[k]=left[i];  i++;    k++;}
    while(j<n2)  {a[k]=right[j];  j++;    k++;}
    for(int i=0;i<n1+n2;i++)
        cout<<a[i];
    

}



int main()
{
    int low,high,mid,n;
    low=0;
    cin>>n;
    high=n-1;
    mid=(high+low)/2;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    mer(a,low,mid,high);
    return 0;
}   