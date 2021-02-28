#include<bits/stdc++.h>
using  namespace std;

void mer(int a[],int b[],int m , int n)
{
    int temp[m+n];
    int i,j,k;
    i=j=k=0;
    while(i<m && j<n)
    {
        if(a[i]>=b[j])   {temp[k]=b[j]; k++;j++; }
        else 
        {
            temp[k]=a[i];
            i++;
            k++;
        }

    }
    while(i<m)  {temp[k]=a[i];  i++;    k++;}
    while(j<n)  {temp[k]=b[j];  j++;    k++;}
    
    for(int g=0;g<m+n;g++)
        cout<<temp[g];

}



int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    int res[m+n];
    int a[m];
    int b[n];
    for(int i=0;i<m;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];    
    mer(a,b,m,n);
    return 0;
}
