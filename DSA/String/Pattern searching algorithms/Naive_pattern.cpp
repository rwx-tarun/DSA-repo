#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    string p;
    getline(cin,s);
    getline(cin,p);
    int n=s.length();
    int m=p.length();
    int j,i;
    for(i=0;i<=n-m;i++)
    { 
        for(j=0;j<m;j++)
        {
            if(p[j]!=s[i+j])
            {
                break; 
            }
        }
        if(j==m)
        {
            cout<<i<<" ";
        }
    }

}