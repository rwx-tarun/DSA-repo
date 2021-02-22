#include<bits/stdc++.h>
using namespace std;

int knapsack(int n,int wt[],int val[],int W)
{
    if(n==0||W==0)
        return 0;

    if(wt[n-1]>W)      
        return knapsack(n-1,wt,val,W);
    else
        return max(knapsack(n-1,wt,val,W),
                    val[n-1]+knapsack(n-1,wt,val,W-wt[n-1]));
}

int main()
{
    int n;
    cin>>n;
    int val[n];
    int wt[n];
    int W;
    cin>>W;
    for(int i=0;i<n;i++)
        cin>>val[i];
    for(int i=0;i<n;i++)
        cin>>wt[i];
    cout<<knapsack(n,wt,val,W);  
    return 0;      
}