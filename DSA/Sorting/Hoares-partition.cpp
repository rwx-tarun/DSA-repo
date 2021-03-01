#include<bits/stdc++.h>
using namespace std;

int hoare(int a[],int l,int r)
{
    int i=l-1;
    int j=r+1;
    int pivot =a[l];
    while(true)
    {
        do{i++;} while(a[i]<pivot);
        do{j--; } while(a[j]>pivot);

        if(i>=j) return j;
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

}




int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<hoare(a,0,n-1);  
    return 0;  
}    