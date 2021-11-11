#include<bits/stdc++.h>
using namespace std;

void solve(string s ,string res)
{
    if(!s.length())
        cout<<res<<endl;
    else
    {
        solve(s.substr(1),res);
        solve(s.substr(1),res+s[0]);
    }
}

int main()
{
    string s ;
    cin>>s;
    solve(s,"");
    return 0;
}
