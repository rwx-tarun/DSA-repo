#include<bits/stdc++.h>
using namespace std;

int maxCut(int n,int a,int b,int c)
{   
    int res;
    if(n<0) return -1;
    if(n==0) return 0;
    res=max(maxCut(n-a,a,b,c),max(maxCut(n-b,a,b,c),maxCut(n-c,a,b,c)));
    if(res==-1) return res;
    else
        return res+1;
}




int main()
{
    int n;
    cin>>n;
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<maxCut(n,a,b,c);
    return 0;

}
