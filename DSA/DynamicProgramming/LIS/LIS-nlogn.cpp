#include<bits/stdc++.h>
using namespace std;

int binary(int tail[],int low,int high,int x)
{
    
    while(low<high){
    int mid=low +(high-low)/2;
    if(x<=tail[mid])
        high=mid;
    else 
        low =mid+1;
    
    }
    return high;
    
}
int longestSubsequence(int n, int a[])
{
   // your code here
   int tail[n];
   tail[0]=a[0];
   int len=1;
   for(int i=1;i<n;i++)
   {
       if(a[i]>tail[len-1]){
            tail[len]=a[i];
            len++;
       }
       else{
            int index=binary(tail,0,len-1,a[i]);
            tail[index]=a[i];
       }
   }  
   return len;
   
   
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<longestSubsequence(n,a);
    return 0;
}