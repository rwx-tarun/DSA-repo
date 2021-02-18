#include<bits/stdc++.h>
using namespace std;
bool match(char a,char b)
{
    return ((a=='}' && b=='{') || (a==']' && b=='[') || (a==')' && b=='(') );
}


bool balParen(string s)
{
    stack <char> st;
    for(int i=0;i<s.length();i++)
    { 
        if (s[i] == '{' || s[i]=='(' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty()==true)        // )( opening before closing 
                return false;
            else if(match(s[i],st.top())==false)
                return false;
            else
                st.pop();

        }
    }
    if(st.empty()==true)        //((()) Extra opening 
        return true;
    else 
        return false;    
}
int main ()
{
    
    string s;
    getline(cin,s);
    if(balParen(s)==true)
        cout<<"TRUE";
    else 
        cout<<"FALSE";
    return 0;
}
