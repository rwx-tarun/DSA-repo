#include<bits/stdc++.h>
using namespace std;

void main()
{
    stack <int >st;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='{'||s[i]=='[')
        s.push(s[i]);
        else{
            if(st.empty())
             cout<<false;
            if(ismatch(st.top(),s[i])==false)
            cout<< false ;
            else 
            st.pop(); 
        }
    }
}