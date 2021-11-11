#include<bits/stdc++.h>
using namespace std;

void solve(string s )
{   
    int  n = s.length();
    string res = "";    
    for(int i=0;i<(1<<n)-1;i++)
    {   
        res="";
        for(int j =0;j<n;j++)
        {
            if(i & (1<<j))
                res = res + s[j];
        }
        cout<<res<<endl;
    }
}

int main()
{
    string s ;
    cin>>s;
    solve(s);
}
